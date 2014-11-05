# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#pragma warning (disable : 4996)
int int_compare(const void *num1, const void *num2);
int main(void){
	int i, num_d;
	int* maindata;
	printf("ÀÏ´Ü ÃÄ\n");
	scanf("%d",&num_d);
    srand((unsigned int)(time(NULL)));
	maindata = (int*)malloc(sizeof(int)*num_d);
	for(i = 0; i < num_d; i++){
		*(maindata +i) = rand();
	}
	for(i = 0; i < num_d; i++){
		printf("%d,",maindata[i]);
	}
	printf("\n");
	qsort(maindata, num_d, sizeof(int), int_compare);
	for(i = 0; i < num_d; i++){
		printf("%d,",maindata[i]);
	}
	_sleep(5000);
}
int int_compare(const void *num1, const void *num2){
	int numA = *((int*)num1);
	int numB = *((int*)num2);
	return numA - numB;
}