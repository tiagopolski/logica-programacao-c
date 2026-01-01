#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    //campos
    struct no *prox;
}TNo;

TNo *alocaNo(int k);
void insereLista1(TNo **pp, int k);
void imprimir(TNo *p);
TNo *buscar(TNo *p); //?? *p ou **pp
void remover(TNo **p);
//inserirFinal();
int main()
{
    TNo *lista = NULL;
    insereLista1(&lista, 7);
    insereLista1(&lista, 12);
    insereLista1(&lista, 45);
    insereLista1(&lista, 62);
    insereLista1(&lista, 9);
    imprimir(lista);

}

TNo *alocaNo(int k) // Aloca 1 nó
{
    TNo *novo = NULL;
    novo = (TNo *)malloc(sizeof(TNo));
    if(novo) //NOVO != NULL
    {
        novo->chave = k;
        novo->prox = NULL;
    }
    return novo;
}

void insereLista1(TNo **pp, int k) // Inserir o nó na lista
{
    TNo *novo = NULL;
    novo = alocaNo(k);
    if (novo == NULL)
    {
        printf("SO nao liberou memoria!");
        return;
    }
    novo->prox = *pp;
    *pp = novo;
}

void imprimir(TNo *p)
{
    while(p->prox!=NULL)
    {
        printf("\n%d", p->chave);
        p = p->prox;
    }
}
