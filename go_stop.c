#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
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