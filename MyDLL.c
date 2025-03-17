#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>	
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

unsigned char* MyDLLFind(DoublyLinkedList *dll, uint16_t key) {
    if(dll->current_size == 0){ 
	printf("Error! Empty list \n");
	return NULL;
    }
    // Começar do início da lista
    Node *currentNode = dll->head; 	
    while (currentNode != NULL && currentNode->key!= key) { 
        currentNode = currentNode->next; 
    }   
    if(currentNode->key == key) { 
        return currentNode->data; 
    }   
    printf("Error! Key not found\n");
    return NULL;    
} 

void MyDLLFind{Next,Previous}
