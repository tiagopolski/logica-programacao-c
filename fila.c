#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    //campos
    struct no *prox;
}TNo;

typedef struct cabeca{
    int cont;
    TNo *inicio, *fim;
}TCabeca;

void enfileirar(TCabeca *p, int k); //enque
void desenfileirar(TCabeca *p); //unenque
void imprime(TNo *p);
TNo *alocaNo(int k);
TCabeca *criaCabeca();

int main()
{
    TCabeca *cabeca=criaCabeca();
    enfileirar(cabeca, 23);
    enfileirar(cabeca, 4);
    enfileirar(cabeca, 68);
    imprime(cabeca->inicio);
    desenfileirar(cabeca);
    printf("\n--------");
    imprime(cabeca->inicio);
    while(cabeca->inicio)
        desenfileirar(cabeca);
    printf("\n-----------");


}

TCabeca *criaCabeca()
{
    TCabeca *novo=NULL;
    novo = (TCabeca *)malloc(sizeof(TCabeca));
    if(novo)
    {
        novo->cont=0;
        novo->inicio=NULL;
        novo->fim=NULL;
    }
}

TNo *alocaNo(int k)
{
    TNo *novo=NULL;
    novo = (TNo *)malloc(sizeof(TNo));
    if(novo)
    {
        novo->chave=k;
        novo->prox = NULL;
    }
    return novo;
}
void enfileirar(TCabeca *p, int k) //enque --> inserção no final
{
    TNo *novo=NULL;
    novo = alocaNo(k);
    if(novo)
    {
        if(p->fim==NULL) //fila vazia
        {
            p->fim=novo;
            p->inicio=novo;
        }
        else
        {
            p->fim->prox = novo;
            p->fim = novo;
        }
        p->cont = p->cont + 1; //contar quantos tem na lista
    }
}
void desenfileirar(TCabeca *p) //unenque --> remoção no inicio
{
    TNo *paux=p->inicio;
    if(aux==NULL)
    {
        printf("\nLista Vazia!");
        return;
    }
    p->inicio = paux->prox;
    free(paux);
    paux=NULL;
    p->cont = p->cont - 1;
    if(p->inicio==NULL)
        p->fim=NULL;
}

void imprime(TNo *p)
{
    if(p==NULL)
    {
        printf("\nLista Vazia!");
        return;
    }
    while(p)
    {
        printf("\n%d", p->chave);
        p=p->prox;
    }
}
