#include <stdio.h>
#pragma warning (disable : 4996)
#include <stdlib.h>
#include <math.h>
int double_compare(const void *num1, const void *num2);
typedef struct pt{int x,y;
double distance;
}POINT;
int main (void){
	int num,limit;
	int i = 0;
	POINT data[100];
	double data_d[100];
	printf("�ϴ� ��, �ٵ� 100 ������ �ȵ� ��:\n");
	scanf("%d",&num);
	if(num > 100){
		printf("������ ��");
		_sleep(5000);
		exit(-1);
	}
	for(i = 0; i< num ; i++){
	printf("%d �� x �� ��:\n",i);
	scanf("%d",&((data +i) -> x));
	printf("%d �� y �� ��:\n",i);
	scanf("%d",&((data +i) -> y));
	(data + i)->distance = sqrt((((double)((data+ i) -> x))*((double)((data+ i) -> x)) + ((double)((data + i ) ->y))*((double)((data + i ) ->y))));
	}
	for(i = 0; i < num; i++){
		data_d[i] = (data + i) -> distance; 
	}
	limit = num;
	qsort(data_d,num,sizeof(double),double_compare);
	printf("� �Ÿ��� ã����?:");
	scanf("%d",&num);
	if(limit < num){
		printf("������ ��");
		_sleep(5000);
		exit(-1);
	}
	printf("%d ��°�� �Ÿ��� �������κ��� %f �Ÿ��� ������",num,data_d[num]);
	_sleep(5000);
}
int double_compare(const void *num1, const void *num2){
	double numA = *((double*)num1);
	double numB = *((double*)num2);
	if(numA < numB)
		return -1;
	if(numA>numB)
		return 1;
	return 0;
}