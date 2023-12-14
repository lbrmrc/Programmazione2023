#include <stdio.h>
#include <stdlib.h>

typedef int Dato;
typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void stampa(Lista l)
{
    while (l)
    {
        printf("%d\n", l->dato);
        l = l->next;
    }
}

void insTesta(Lista *pl, Dato d)
{
    Nodo *aux;
    aux = (Nodo *)malloc(sizeof(Nodo));
    if (aux == NULL)
        exit(1);
    aux->dato = d;
    aux->next = *pl;
    *pl = aux;
}

int main()
{
    Lista l = NULL;
    stampa(l);

    insTesta(&l, 3);

    stampa(l);

    insTesta(&l, 5);
    stampa(l);
    return 0;
}