//
// Created by Administrador on 17/6/2023.
//

#ifndef GUIA1_EJ12_1_TEXTO_H
#define GUIA1_EJ12_1_TEXTO_H

typedef struct node{
    char word[20];
    struct node * next;
}Node;

typedef struct list{
    Node * header;
}List;

Node * newNode(char * word);
List * newList();

void enlist(List * list, Node * word);
void print(List * list);
void frecuencia(List * list);


#endif //GUIA1_EJ12_1_TEXTO_H
