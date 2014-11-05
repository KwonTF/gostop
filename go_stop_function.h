#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
enum pae_type {ÇÇ, ½ÖÇÇ, ²ý, µÑ´Ù, È«´Ü, Ã»´Ü, ÃÊ´Ü, ³ëÃÊ´Ü, °íµµ¸®, ºñ±¤, ±¤};
typedef struct pae{
	struct pae* prev;
	int month;
	int where;
	int type;
	int total;
	struct pae* next;
}card;
card* add(int month_In, int type_In, card* end){
	end -> next = (card*)calloc(1,sizeof(card));
	end -> next ->prev = end;
	end = end -> next;
	end -> month = month_In;
	end->type = type_In;
	return end; 
}
void cardprint(card* list[]){
	int i = 0;
	while(list[i] != 0){
		printf("%d¿ù-",list[i]->month);
		switch (list[i] -> type)
		{
		case:1
				printf("ÇÇ ");
				break;
		case:2
				 printf("½ÖÇÇ ");
				break;
		case:3
				 printf("²ý ");
				break;
		default:
			break;
		}