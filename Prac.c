#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable : 4996)
struct myInt{
	int data;
	struct myInt* nextlink;
};
struct myInt* start;
struct myInt* end;
int kugui;
void add(int a);
int search(int s);
void insert(int a, int index);
int getint(int index);
void remove_index(int index);
int main (void){
	int i = 0;
	int data[5] = {5, 7, 8, 9, 10};
	for(i = 0; i<5; i++){
		add(data[i]);
	}
	insert(3,3);
	for(i = 0; i < kugui; i++){
		printf("%d,",getint(i));
	}
	printf("\n");
	remove_index(3);
	for(i = 0; i < kugui; i++){
		printf("%d,",getint(i));
	}
	_sleep(5000);
	return 0;
}
void add(int a){
	if(start == 0){
		start = (struct myInt*)calloc(1,sizeof(struct myInt));
		start->data = a;
		end = start;
		kugui++;
		return;
	}
	end ->nextlink = (struct myInt*)calloc(1,sizeof(struct myInt));
	end = end ->nextlink;
	end ->data  = a;
	kugui++;
}
int search(int s){
	int i = 0;
	struct myInt* p;
	p = start;
	for(i = 0; ; i++){
		if(p -> data == s){
			return i;
		}
		p = p -> nextlink;
		if (p == end){
			break;
		}
	}
	return -1;
}
void insert(int a, int index){
	int i = 0;
	struct myInt* p;
	struct myInt* q;
	p = start;
	for(i = 0; i < (index-1); i++){
		p = p ->nextlink;
	}
	q = p->nextlink;
	p -> nextlink = (struct myInt*)calloc(1,sizeof(struct myInt));
	p = p->nextlink;
	p->data = a;
	p->nextlink  = q;
	kugui++;
}
int getint(int index){
	int i = 0;
	struct myInt* p;
	p = start;
	for(i = 0; i <index; i++){
		p = p -> nextlink;
	}
	return p->data;
}
void remove_index(int index){
	int i = 0;
	struct myInt* p;
	p = start;
	for(i = 0; i < (index -1); i ++){
		p = p->nextlink;
	}
	p ->nextlink = p->nextlink->nextlink;
	kugui--;
}
