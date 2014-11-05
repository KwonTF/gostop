# include <stdio.h>
# include <stdlib.h>
# include <time.h>
#pragma warning (disable : 4996)
struct student{
	char name[10];
	int id;
	char or_grade[3];
	double grade;
};
int main(void){
	struct student maindata[5];
	int i = 0;
	double compare = 4.5;
	for(i = 0; i < 5; i++){
	printf("Input the %dth name\n",i);
	scanf("%s",(maindata+i) -> name);
	printf("Input the %dth id\n",i);
	scanf("%d",&((maindata + i) ->id));
	printf("Input the %dth grade\n",i);
	scanf("%s",(maindata+i) -> or_grade);
	(maindata + i) ->grade = 0;
	if((maindata + i) ->or_grade[0] == 'A')
		(maindata + i) ->grade = 4.3;
	else if((maindata + i) ->or_grade[0] == 'B')
		(maindata + i) ->grade = 3.3;
	else if((maindata + i) ->or_grade[0] == 'C')
		(maindata + i) ->grade = 2.3;
	if((maindata + i) ->or_grade[1] == '+')
		(maindata + i) ->grade += 0.2;
	else if((maindata + i) ->or_grade[1] == '-')
		(maindata + i) ->grade -= 0.3;
	}
	for(compare = 4.5; compare > 1.9; compare = compare - 0.1){
		for(i = 0; i < 5; i++){
			if(((maindata + i) ->grade) == compare){
				printf("%s, %d, %s\n",maindata[i].name, maindata[i].id, maindata[i].or_grade);
			}
			break;
		}
	}
	_sleep(10000);
}