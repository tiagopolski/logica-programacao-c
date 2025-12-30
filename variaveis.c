#include <stdio.h>
#include <string.h>

//variaveis globais
void armazenar(int v[], int tam);
void imprimir(int v[], int tam);

int main()
{
    //variaveis locais
    int vetor[10]={}; //zerar todas as posições
    float vetor2[5];
    int vet[]={2,4,6,8,0};
    char a='A';
    char nome[10]="Tiago";
    armazenar(vetor, 10);
    imprimir(vetor, 10);
    imprimir(vet, 5);
    
/*    
    if(strcmp(nome,"Tiago")==0)
        printf("Sim");
    else
        printf("Nao"); */
    /*
    int i;
    for(i=0; i<10; i++)
    {
        printf("\nInforme valor [%d]:", i);
        scanf("%d",&vetor[i]);
    }
    for(i=0; i<10; i++)
    {
        printf("\n[%d]=%d", i, vetor[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\nInforme valor [%d]:", i);
        scanf("%f",&vetor2[i]);
    }
    for(i=0; i<5; i++)
    {
        printf("\n[%d]=%.2f", i, vetor2[i]);
    }
    */
    printf("\nInforme nome:");
    //scanf("%s", &nome);
    //gets(nome);
    //fgets(nome, 10, stdin);
    scanf(" % [^\n]", &nome);
    printf("O nome é: %s", nome);
}

void armazenar(int v[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("\nInforme valor:");
        scanf("%d",&v[i]);
    }
}

void imprimir(int v[], int tam)
{
    printf("\n[%d]=%d", i);
}