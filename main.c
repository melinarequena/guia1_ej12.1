#include <stdio.h>
#include <string.h>
#include "Texto.h"


int main() {
    List * list = newList();
    enlist(list, newNode("HOLA"));
    enlist(list, newNode("CHAU"));
    enlist(list, newNode("TEAMO"));
    enlist(list, newNode("HOLA"));
    enlist(list, newNode("CHAU"));
    enlist(list, newNode("TEAMO"));
    enlist(list, newNode("HOLA"));
    enlist(list, newNode("CHAU"));
    enlist(list, newNode("TEAMO"));
    enlist(list, newNode("HOLA"));
    enlist(list, newNode("CHAU"));
    enlist(list, newNode("TEAMO"));


    print(list);
    frecuencia(list);
    /*printf("Ingrese un texto\n");
    char texto[1000], * palabra;
    fflush(stdin);
    gets(texto);
    palabra = strtok(texto, " ");
    while(palabra != NULL){
        enlist(list, newNode(palabra));
    }palabra = strtok(NULL, " ");
*/


    return 0;
}
