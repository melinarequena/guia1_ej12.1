//
// Created by Administrador on 17/6/2023.
//

#include "Texto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *newNode(char * word) {
    Node * aux = NULL;
    aux = malloc(sizeof(Node));
    if(aux == NULL){
        printf("Error");
        exit(-1);
    }
    strcpy(aux->word, word);
    aux->next = NULL;
    return aux;
}

List *newList() {
    List * aux = NULL;
    aux = malloc(sizeof(List));
    if(aux == NULL){
        printf("Error");
        exit(-1);
    }
    aux->header = NULL;
    return aux;
}

void enlist(List *list, Node *word) {
    if(list->header == NULL){
        list->header = word;
    }else{
        Node * aux = list->header;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = word;
    }
}

void print(List *list) {
    Node * aux = list->header;
    printf("\nList\n");
    while(aux != NULL){
        printf("%s -> ", aux->word);
        aux = aux->next;
    }
    printf("NULL\n");
}

void frecuencia(List *list) {
    Node * aux1 = list->header;
    Node * aux2 = list->header;
    while (aux1 != NULL){
        int cont=0;
        while(aux2 != NULL){
            if(strcmp(aux1->word, aux2->word) == 0){
                cont++;
            }

            aux2 = aux2->next;
        }
        printf("\nLa palabra %s aparece %d veces\n", aux1->word, cont);
        aux1 = aux1->next;
    }
}


