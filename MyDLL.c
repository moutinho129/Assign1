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

unsigned char* MyDLLFindNext(DoublyLinkedList* dll, uint16_t key){
	
	if(dll->current_size == 0){ // Verificar se a lista está vazia
		printf("Error! Empty list \n");
		return NULL;
	}
	Node *currentNode = dll->head;	
	while (currentNode != NULL && currentNode->key!= key) { // Percorrer a lista
        currentNode = currentNode->next; // Avançar para o próximo nó
	}
	if(currentNode->key == key) { // Verificar se a chave foi encontrada
		if(currentNode->next == NULL){ // Verificar se é o último nó
			printf("Error! No next node\n");
			return NULL;
		}
		return currentNode->next->data; // Retornar os dados
	}   
	printf("Error! Key not found\n");
	return NULL;
}

unsigned char* MyDLLFindPrev(DoublyLinkedList* dll, uint16_t key){

	if(dll->current_size == 0){
		printf("Error! Empty list \n");
		return NULL;
	}
	Node *currentNode = dll->head;	
	while (currentNode != NULL && currentNode->key!= key) { // Percorrer a lista
        currentNode = currentNode->next; // Avançar para o próximo nó
	}
	if(currentNode->key == key) { // Verificar se a chave foi encontrada
		if(currentNode->prev == NULL){ // Verificar se é o último nó
			printf("Error! No previous node\n");
			return NULL;
		}
		return currentNode->prev->data; // Retornar os dados
	}   
	printf("Error! Key not found\n");
	return NULL;
}
