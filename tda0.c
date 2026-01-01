#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int ra;
    char nome[50];
    float renda;
}; //a1, a2;

int main()
{
    struct aluno a1, a2;
    printf("\n%d\n",sizeof(a1.renda));
    printf("\nInforme RA: ");
    scanf("%d",&a1.ra);
    printf("\nInforme Nome: ");
    scanf("%s", a1.nome);
    printf("\nInforme renda: ");
    scanf("%f", &a1.renda);

    printf("\nInforme RA: ");
    scanf("%d",&a2.ra);
    printf("\nInforme Nome: ");
    scanf("%s", a2.nome);
    printf("\nInforme renda: ");
    scanf("%f", &a2.renda);
    printf("\n%d %s %.2f", a1.ra, a1.nome, a1.renda);
    printf("\n%d %s %.2f", a2.ra, a2.nome, a2.renda);
}
