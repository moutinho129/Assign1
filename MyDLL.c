#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>	
#include"MyDLL.h"


//////////INICIO FUNÇAO INIT///////////////////////////////////////

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
/////////////FIM FUNÇAO INIT///////////////////////////////////////


//////////INICIO FUNÇAO INSERT///////////////////////////////////////

int MyDLLInsert(DoublyLinkedList *dll, uint16_t key, unsigned char *data) {
// Verificar se a lista está cheia
    if (dll->current_size >= dll->max) { 
        printf("Error! The list is full, insertion is unavailable\n");
        return LIST_FULL;  // Lista cheia, código de erro
    }

    Node *newNode = NULL;  // Novo nó 
    int i = 0; 

    // Procurar um nó não utilizado
    while (i < ELEMENTS) {  //Vai percorrer os nós todos
        if (dll->nodes[i].notUsed) {    //Verifica se o nó está em uso
            newNode = &dll->nodes[i];  //Vai ser atruibuido ao newNode o nó não utilizado
            break;                     
        }
        i++; 
    }
	//Verificação se o nó foi encontrado
    if (newNode == NULL) { 
        printf("Error! no empty node found \n");
        return ALL_NODE_FULL;   //Todos os nós estão em uso, código de erro
    }
 
    newNode->key = key;    //O key do newNode tem o valor key atribuido
    for (int i = 0; i < ELEMENT_SIZE; i++) {  
        newNode->data[i] = data[i]; //o data newNode tem o valor data atribuido
    }
    newNode->notUsed = false; //O nó está em uso

    
    newNode->prev = dll->tail; 	//o nó anterior ao newNode é a tail
    newNode->next = NULL;  //O nó seguinte ao newNode é NULL

    // Inserir o nó na lista
    if (dll->head == NULL) {  // Lista vazia
        dll->head = newNode; // A head é o novo nó
    } else {
        dll->tail->next = newNode; //O nó a seguir ao tail é o newNode
    }
    dll->tail = newNode; //A tail é o newNode

    dll->current_size++;
    return 0; 
}
/////////////FIM FUNÇAO INSERT///////////////////////////////////////


//////////INICIO FUNÇAO REMOVE///////////////////////////////////////

void MyDLLRemove(void){
}
/////////////FIM FUNÇAO REMOVE///////////////////////////////////////


//////////INICIO FUNÇAO FIND///////////////////////////////////////

unsigned char* MyDLLFind(DoublyLinkedList *dll, uint16_t key) {
    if(dll->current_size == 0){          //Verificaçao de lista vazia
	printf("Error! Empty list \n");
	return NULL;
    }
    Node *currentNode = dll->head; 	   // Começar do início da lista
    while (currentNode != NULL && currentNode->key!= key) { 
        currentNode = currentNode->next;  // Avançar para o próximo nó
    }   
    if(currentNode->key == key) {     //Verificar se a key foi encontrada
        return currentNode->data;   //Retornar os dados
    }   
    printf("Error! Key not found\n");
    return NULL;    
} 
/////////////FIM FUNÇAO FIND///////////////////////////////////////


//////////INICIO FUNÇAO FINDNEXT///////////////////////////////////////

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
/////////////FIM FUNÇAO FINDNEXT///////////////////////////////////////


//////////INICIO FUNÇAO FINDPREV///////////////////////////////////////

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
/////////////FIM FUNÇAO FINDPREV///////////////////////////////////////



