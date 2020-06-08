#ifndef EJERCICIO1_H
#define  EJERCICIO1_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

typedef struct _node NODE;
typedef struct _info INFO;
struct _info{
    char nombre[32];
    char apellido[64];
};

struct _node{
    INFO info;
    NODE *next;
    NODE *last;   
};
typedef struct _list list;
struct _list{
    NODE *head;
    NODE *tail;
};

void insertar(INFO info, list *l );
list *crear_list();
void eliminar_lista(list *l);
NODE *crear_nodo();
void borrar_nodo(NODE *n);
void imprimir_lista(list *l);

#endif