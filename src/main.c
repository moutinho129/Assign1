/**
 * @file main.c
 * @brief main da DLL
 * 
 * O ficheiro main.c é o ficheiro onde é feita a interação com o utilizador, onde são chamadas as funções
 * 
 * @author João Ferreira(98180) e Nuno Moutinho(98626)
 * @date 18/03/2025
 * @bug case 7 continua a mostrar todos os dados após a remoção de um nó
 *  
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>
#include<stdbool.h>	
#include"MyDLL.h"

int main(){
    DoublyLinkedList dll;

    int select = 7;
    bool Inializated = false;  
    int keyRemove=0; 
    int elementID=0;
    unsigned char data[ELEMENT_SIZE];
    unsigned char* data2;
      
    while(select != 0){
        printf("\n|=================== MENU =================|\n");
        printf  ("|        KEY          |       OPTIONS      |\n");
        printf  ("|==========================================|\n");
        printf  ("|         1           |        Init        |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         2           |    Insert Node     |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         3           |    Remove Node     |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         4           |     Find Node      |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         5           |   Find next Node   |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         6           |   Find prev Node   |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         7           |     Node List      |\n");
        printf  ("|---------------------|--------------------|\n");
        printf  ("|         0           |        Exit        |\n");
        printf  ("|==========================================|\n");
        printf("\n Choose an option(first you should initiate): ");

        scanf("%d", &select);

        if (select != 1 && Inializated == false){ 
                printf("Error! DLL not initiated\n");
        } else {
        switch(select){
            case 1:
                printf("Enter the number of elements: \n"); 
                int n_ELEMENTS;                             
                scanf("%d", &n_ELEMENTS);                   
                printf("Enter the size of the elements: \n"); 
                int ELEMENTSIZE;                             
                scanf("%d", &ELEMENTSIZE);                   
                MyDLLInit(&dll, n_ELEMENTS, ELEMENTSIZE);    
                Inializated = true;                      
                printf("DLL initiated\n");
                break;
        /////////////////////////////////
            case 2:
                printf("Enter the key for the node: \n");
                scanf("%d", &elementID);

                printf("Enter the data for the node: \n");
                scanf("%s", data);

                if(MyDLLInsert(&dll, elementID, data) == 0){
                    printf("Node %d inserted\n", elementID);
                }
                else{
                    printf("Node not inserted\n");
                }
                break;
        /////////////////////////////////
            case 3:
                printf("Enter key you want to remove: \n");
                scanf("%d", &keyRemove);  
                if(MyDLLRemove(&dll, keyRemove) == 0){
                    printf("Node %d removed\n", keyRemove);
                }
                else{
                    printf("Node not removed\n");
                }
                break;
        /////////////////////////////////
            case 4:
                printf("Enter key to find: ");
                scanf("%d", &elementID);
                data2 = MyDLLFind(&dll, elementID);
                if (data2 != NULL) {
                    printf("Data found: %s\n", data2);
                } else {
                    printf("Node not found\n");
                }
                break;
        /////////////////////////////////
            case 5:
                data2 = MyDLLFindNext(&dll, elementID);
                if (data2 != NULL) {
                    printf("Next node data: %s\n", data2);
                } else {
                    printf("Next node not found\n");
                }
                break;
        /////////////////////////////////
            case 6:
                data2 = MyDLLFindPrev(&dll, elementID);
                if (data2 != NULL) {
                    printf("Previous node data: %s\n", data2);
                } else {
                    printf("Previous node not found\n");
                }
                break;
        /////////////////////////////////
            case 7:
                for(int i = 0; i < dll.max; i++){
                    printf("Node %d: %s\n", dll.nodes[i].key, dll.nodes[i].data);
                }
                break;
        /////////////////////////////////
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("ERROR! Invalid option\n");
        }
    }

    }
    return 0; 
}
