#include<stdio.h>
#include<stdlib.h>
#include"MyDLL.h"

void MyDLLInit(DoublyLinkedlist *dll, size_t max, size_t elememt_size){
	if(max == 0 || element_size == 0){
		printf("ERROR(Invalid value)");
		return
	}
	
	dll -> max = max;
	dll -> elememt_size = elememt_size;
	dll -> head = NULL;
	dll -> tail = NULL;
	dll -> current_size = 0;
}

void MyDLLInsert(void){
}

void MyDLLRemove(void){
}

void MyDLLFind(void){
}

void MyDLLFind{Next,Previous}
