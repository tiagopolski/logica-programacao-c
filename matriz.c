#include <stdio.h>
#include <string.h>

//variaveis globais


int main()
{
    int matriz[3][4]={};
    int linha, coluna;
    for(linha=0; linha<3; linha++)
    {
        for(coluna=0; coluna<4; coluna++)
        {
            printf("[%d][%d] :", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    for(linha=0; linha<3; linha++)
    {
        for(coluna=0; coluna<4; coluna++)
        {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
}
