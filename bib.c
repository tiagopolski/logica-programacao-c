int Fatorial(int n)
{
    int fat = 1, i= 1;
    for(i = 1; i <= n; i++)
    {
        fat = fat * i;
    }

    return fat;
}
int Potencia(int base, int exp)
{
    int c = 0, pot = 1;
    while(c < exp)
    {
        pot = pot * base;
        c = c + 1;
    }

    return pot;
}
int somaFibonacci(int ntermos)
{
    int atual = 1, ant = 1, soma = 2, c = 2, termo;
    while(c < ntermos)
    {
        termo = atual + ant;
        ant = atual;
        atual = termo;
        soma = soma + termo;
        c = c + 1;
    }

    return soma;
}
float MediaAltura(float v[],int n)
{
    float media, soma = 0;
    int c;
    for(c=0; c<n; c++)
    {
        soma = soma + v[c];
    }
    media = soma / n;
    return media;
}

int main()
{
    float v[]={1,2,3,4,5}, m;
    int f, p, s;
    f = Fatorial(5);
    p = Potencia(4, 3);
    s = somaFibonacci(5);
    m = MediaAltura(v, 5);
}
