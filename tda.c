#include <stdio.h>
#include <stdlib.h>

typedef struct endereco{
    char cidade[20], rua[20];
    int numero;
}TEndereco;
typedef struct aluno{
    int ra;
    char nome[50];
    float renda;
    float notas[3];
    TEndereco endereco;
}TAluno;

int main()
{
    TAluno valunos[2], a1, a2;
    int i, j;
    for(i=0;i < 2; i++)
    {
        printf("\nInforme RA: ");
        scanf("%d",&valunos[i].ra);
        printf("\nInforme Nome: ");
        scanf("%s",valunos[i].nome);
        printf("\nInforme renda: ");
        scanf("%f", &valunos[i].renda);
        for(j=0; j < 3; j++)
        {
            printf("\nInforme nota: ");
            scanf("%f", &valunos[i].notas[j]);
        }
        printf("\nInforme cidade: ");
        scanf("%d", &valunos[i].endereco.cidade);
        printf("\nInforme rua: ");
        scanf("%d", &valunos[i].endereco.rua);
        printf("\nInforme numero: ");
        scanf("%d", &valunos[i].endereco.numero);
    }
    for(i=0;i < 2; i++)
    {
        printf("\n%d %s %f", valunos[i].ra, valunos[i].nome, valunos[i].renda);
        for(j=0; j < 3; j++)
        {
            printf("\nNota: %.1f", valunos[i].notas[j]);
        }
        printf("\n%s %s %d", valunos[i].endereco.cidade, valunos[i].endereco.rua, valunos[i].endereco.numero);
    }
}


