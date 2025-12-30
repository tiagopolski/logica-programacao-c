#include <stdio.h>
#define tam 10 //Definir uma função

int teste; //VARIAVEL GLOBAL
// funções sem retorno (procedimentos)
//void imprimir(int vetor, int tam);
int somar(int n1, int n2);
int subtrair(int n1, int n2);
int multiplicar(int n1, int n2);
float dividir(int n1, int n2);


int main()
{
    
    int resultado, a,b; //variavel local 
    char opcao='a';
    while(opcao!='x')
    {
        printf("\nS-Somar\nU-Subtrair\nM-Multiplicar\nD-Dividir\nX-Sair:");
        scanf("%c",&opcao);
        switch(opcao)
        {
            case 's':
            case 'S':
                {
                    printf("\nInforme 2 numeros:");
                    scanf("%d%d", &a,&b);
                    resultado = somar(a,b);
                    printf("\n%d + %d = %d", a, b, resultado);
                }break;
            case 'u':
            case 'U':
                {
                    printf("\nInforme 2 numeros:");
                    scanf("%d%d", &a,&b);
                    resultado = subtrair(a,b);
                    printf("\n%d - %d = %d", a, b, resultado);
                }break;
            case 'm':
            case 'M':
                {
                    printf("\nInforme 2 numeros:");
                    scanf("%d%d", &a,&b);
                    resultado = multiplicar(a,b);
                    printf("\n%d * %d = %d", a, b, resultado);
                }break;
            case 'd':
            case 'D':
                {
                    printf("\nInforme 2 numeros:");
                    scanf("%d%d", &a,&b);
                    resultado = dividir(a,b);
                    printf("\n%d / %d = %d", a, b, resultado);
                }break;
        }
    }
}

int somar(int n1, int n2) //variaveis locais = parametro por copia
{
    int res=0; //variavel local 
    res = n1+n2;
    return res;
}
int subtrair(int n1, int n2)
{
    return n1-n2;
}
int multiplicar(int n1, int n2)
{
    return n1*n2;
}
float dividir(int n1, int n2)
{
    if(n2==0)
        return 0;
    else 
        return (float)n1/n2;
}
