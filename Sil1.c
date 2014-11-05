# include <stdio.h>
# include <stdlib.h>
#pragma warning (disable : 4996)
struct  info
{
	char name[20];
	double score;
	int credit;
};
void input_data(struct info data[], int num);
void scholarship(struct info data[], int num);
int main (void){
	struct info students[5];
	input_data(students,5);
	scholarship(students,5);
	_sleep(5000);
	return 0;
}
void input_data(struct info data[], int num){
	int i = 0;
	for(i = 0; i< num; i++){
		printf("Input the %dth student name:\n",i);
		scanf("%s",&(data[i].name));
		printf("Input the %dth student score:\n",i);
		scanf("%f",&((data + i) -> score));
		printf("Input the %dth student credit:\n",i);
		scanf("%d",&((data + i) -> credit));
	}
}
void  scholarship(struct info data[], int num){
	int i = 0;
	for(i = 0; i < num; i ++){
		if(((data + i) ->score) >= 4.3 && ((data +i)->credit) >= 20){
			printf("%s\n %f\n %d\n", data[i].name,data[i].score,data[i].credit);
		}
	}
}