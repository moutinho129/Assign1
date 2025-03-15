#ifndef MY_DLL_H
#define MY_DLL_H

#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>

#define DATA_NODE_SIZE 100

typedef struct Node{
	uint16_t key;
	unsigned char data [DATA_NODE_SIZE];
	struct Node *next;
	struct Node *prev;
} Node;

typedef struct {
	Node nodes[DATA_NODE_SIZE];
	Node *head;
	Node *tail;
	size_t max;
	size_t element_size;
	size_t current_size;
	
} DoublyLinkedList;

void MyDLLInit(DoublyLinkedList *dll, size_t max, size_t elem_size);

void MyDLLRemove(DoublyLinkedList *dll, uint16_t key);

void MyDLLInsert(DoublyLinkedList *dll, uint16_t key, unsigned char *data);

const unsigned char* MyDLLFind(DoublyLinkedList* dll, uint16_t key);

const unsigned char* MyDLLFindNext(DoublyLinkedList* dll, uint16_t key);

const unsigned char* MyDLLFindPrev(DoublyLinkedList* dll, uint16_t key);

#endif
