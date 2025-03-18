/** @file MyDLL.h
 * @brief Funções e parâmetros usados na Double Linked List
 *
 * O ficheiro MyDLL.h é o ficheiro onde foram declaradas as funções e os parâmetros que foram usados 
 * durante a implementação de uma lista duplamente ligada. 
 *
 * @author João Ferreira(98180), Nuno Moutinho(98626)
 * @date 18/03/2025
 * @bug Nenhum
*/

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


/**
 * @struct Node
 * @brief Estrutura usada para representar um nó da DLL 
 *
 * Cada nó contem uma chave que o identifica(key), ponteiros para o nó seguinte(next), para o anterior
 * (prev) e ainda um indicador booleano (notUsed) que indica que o nó está livre.
*/
typedef struct Node{
	uint16_t key;				/**< chave para identificação do nó */
	unsigned char data [ELEMENT_SIZE];	/**< dados armazenados no nó */
	struct Node *next;			/**< ponteiro para o proximo nó  */
	struct Node *prev;			//*< ponteiro para o nó anterior */
	bool notUsed;				//*< indicador booleano que indica se o nó está livre */
} Node;

/**
 * @struct DoublyLinkedList
 * @brief Estrutura que representa a DLL
 * 
 * contem ponteiros para o inicio e para o final de uma lista e variaveis para o tamanho maximo
 * da lista e o tamanho atual da lista

*/
typedef struct {
	Node nodes[ELEMENTS];
	Node *head;				/**< ponteiro para o primeiro nó da lista */
	Node *tail;				/**< ponteiro para o ultimo nó da lista */
	size_t max;				/**< numero maximo de elementos permitidos na lista */
	size_t current_size;			/**< tamanho atual da lista*/
	
} DoublyLinkedList;


/** @brief Inicializa a DLL
 *
 * Declara os valores inicias da lista, definindo os ponteiros head e tail como NULL, o tamanho 
 * atual como zero, os ponteiros prev e next como NULL e o os nós como não utilizados
 *
 * @param dll ponteiro para a DLL
 * @param max numero maximo de elementos
 * @param elem_size tamanho de cada elemento
*/
void MyDLLInit(DoublyLinkedList *dll, size_t max, size_t elem_size);

/** @brief Remove um nó da DLL
*
* Remove um nó especifico ajustando a lista
*
* @param dll ponteiro para a DLL
* @param key indicador do nó a ser removido
* @return KEY_NOT_FOUND caso não encontre a key inserida
* @return 0 caso não haja erros
*/
int MyDLLRemove(DoublyLinkedList *dll, uint16_t key);


/** @brief Insere um novo nó na DLL
*
* Insere um novo nó com a chave e dados fornecidos, caso a lista ja esteja cheia retorna erros.
*
* @param dll ponteiro para a DLL
* @param key chave do novo nó
* @param data ponteiro para os dados que devem ser usados nesse nó
* @return LIST_FULL caso a lista esteja cheia
* @return ALL_NODE_FULL caso não exista nós disponivéis
* @return 0 caso não haja erros
*/
int MyDLLInsert(DoublyLinkedList *dll, uint16_t key, unsigned char *data);


/** @brief Procura um nó especifico
*
* Percorre a lista à procura de um nó especifico dando retorno da de um ponteiro para os seus dados
* caso não encontre retorna NULL
* 
* @param dll ponteiro para a DLL
* @param key chave do nó a ser procurado
* @return dados do nó procurado ou NULL caso nao seja encontrado
*/
unsigned char* MyDLLFind(DoublyLinkedList* dll, uint16_t key);

/** @brief Procura o proximo nó de um nó especifico
*
* Percorre a lista à procura de um nó especifico e, caso não seja o ultimo, retorna os dados do
* nó seguinte, caso seja o ultimo ou a key inserida não for encontrada retorna NULL
*
* @param dll ponteiro para o DLL
* @param key chave do nó a ser procurado
* @return dados do nó seguinte ao que foi procurado ou NULL caso seja o ultimo ou nao exista
*/

unsigned char* MyDLLFindNext(DoublyLinkedList* dll, uint16_t key);

/** @brief Procura o nó anterior a um nó especifico
*
* Percorre a lista à procura de um nó especifico e, caso não seja o primeiro, retorna os dados do
* nó anterior, caso seja o primeiro ou a key inserida não for encontrada retorna NULL
*
* @param dll ponteiro para o DLL
* @param key chave do nó a ser procurado
* @return dados do nó anterior ao que foi procurado ou NULL caso seja o primeiro ou não exista
*/

unsigned char* MyDLLFindPrev(DoublyLinkedList* dll, uint16_t key);

#endif


