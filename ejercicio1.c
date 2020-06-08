#include"ejercicio1.h"

int main(){
    int num, i;
    INFO data;
    list *l = crear_list();
    printf("Cuantos nodos desea agregar?\n");
    scanf("%d\n", &num);
    for(i=0;i<num;i++){
        printf("%d Persona\n",i+1);
        gets(data.nombre);
        gets(data.apellido);
        insertar(data,l);
    }
    imprimir_lista(l);
    eliminar_lista(l);
    printf("\nSe elimino la lista\n");
    return 0;
}

void insertar(INFO data, list *l ){
    NODE *n;
    n = crear_nodo();
    strcpy(n->info.nombre,data.nombre);
    strcpy(n->info.apellido,data.apellido);
    n->next = NULL;
    if(l->head==NULL){
        l->head = n;
        l->tail = n;
    }
    else{
        l->tail->next = n;
        n->last = l->tail;
        l->tail = n;
    }
}

list *crear_list(){
    list *l= (list*)malloc(sizeof(list));
    l->head=NULL;
    l->tail=NULL;
    return l;
}

void eliminar_lista(list *l){
    if(l->head != NULL){
        borrar_nodo(l->head);
    }
    free(l);
}

NODE *crear_nodo(){
    NODE *n=(NODE*)malloc(sizeof(NODE));
    return n;
}

void borrar_nodo(NODE *n){
    if(n->next!=NULL){
        borrar_nodo(n->next);
    }
    n->last = NULL;
    free(n);
}
void imprimir_lista(list *l){
    NODE *i;
    for(i=l->head; i!=NULL;i=i->next){
        printf("Nombre: %s| Apellido: %s\n", i->info.nombre,i->info.apellido);
    }
}
