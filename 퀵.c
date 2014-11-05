# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#pragma warning (disable : 4996)
int int_compare(const void *num1, const void *num2);
int (*comp)(const void *num1, const void *num2) = int_compare;
	int main (void){
	int maindata[10];
	int i = 0;
	for(i = 0; i < 10; i++){
		printf("%d번째를 쳐",i);
		scanf("%d",maindata + i);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d,",maindata[i]);
	}
	printf("\n");
    qsort(maindata,10,sizeof(int),comp);
	for(i = 0; i < 10; i++){
		printf("%d,",maindata[i]);
	}
	srand((unsigned int)(time(NULL)));
	for(i = 0; i< 10; i++){
		maindata[i] = rand();
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d,",maindata[i]);
	}
	printf("\n");
    qsort(maindata,10,sizeof(int),int_compare);
	for(i = 0; i < 10; i++){
		printf("%d,",maindata[i]);
	}
	_sleep(5000);
	}
//Compare Function for qsort Function
int int_compare(const void *num1, const void *num2){
	int numA = *((int*)num1);
	int numB = *((int*)num2);
	return numA - numB;
}