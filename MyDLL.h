#ifndef MY_DLL_H
#define MY_DLL_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>	

#define ELEMENTS 100
#define ELEMENT_SIZE 128
#define LIST_FULL -1
#define ALL_NODE_FULL -2
#define KEY_NOT_FOUND -3

typedef struct Node{
	uint16_t key;
	unsigned char data [ELEMENT_SIZE];
	struct Node *next;
	struct Node *prev;
	bool notUsed;		
} Node;

typedef struct {
	Node nodes[ELEMENTS];
	Node *head;
	Node *tail;
	size_t max;
	size_t current_size;
	
} DoublyLinkedList;

void MyDLLInit(DoublyLinkedList *dll, size_t max, size_t elem_size);

int MyDLLRemove(DoublyLinkedList *dll, uint16_t key);

int MyDLLInsert(DoublyLinkedList *dll, uint16_t key, unsigned char *data);

unsigned char* MyDLLFind(DoublyLinkedList* dll, uint16_t key);

unsigned char* MyDLLFindNext(DoublyLinkedList* dll, uint16_t key);

unsigned char* MyDLLFindPrev(DoublyLinkedList* dll, uint16_t key);

#endif

