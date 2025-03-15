#include "MyDLL.h"

unsigned char* MyDLLFind(DoublyLinkedList *dll, uint16_t key) {
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