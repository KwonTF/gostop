# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# define Num 50000
#pragma warning (disable : 4996)
//Function Info
void go_first(int data[], int filenum);
int int_compare(const void *num1, const void *num2);
//Main Function
int main (void){
	int i= 0, j = 0, temp;
	clock_t start, end , one_timer, two_timer;
	int maindata[Num];
	srand((unsigned int)(time(NULL)));
	go_first(maindata,Num);
	start = clock();
	for(i = 0; i<Num; i ++){
		for(j = Num ; j > i; j--){
			if(maindata[j] < maindata[j-1]){
				temp = maindata[j];
				maindata[j] = maindata[j-1];
				maindata[j-1] = temp;
			}
		}
	}
	end = clock();
	one_timer = end - start;
	go_first(maindata,Num);
	start = clock();
	qsort(maindata,Num,sizeof(int),int_compare);
	end = clock();
	two_timer = end - start;
	printf("Time1 takes %dclock and %d second!\n",one_timer, one_timer/CLOCKS_PER_SEC);
	printf("Time2 takes %dclock and %d second!\n",two_timer, two_timer/CLOCKS_PER_SEC);
	_sleep(10000);
}
//Random Maker
void go_first(int data[], int filenum){
	int i = 0;
	for(i = 0; i < filenum; i++){
		data[i] = rand();
	}
}
//Compare Function for qsort Function
int int_compare(const void *num1, const void *num2){
	int numA = *((int*)num1);
	int numB = *((int*)num2);
	if(numA < numB){
		return -1;
	}
	else if(numA  > numB){
		return 1;
	}
	return 0;
}