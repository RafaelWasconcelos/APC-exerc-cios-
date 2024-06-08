#include <stdio.h>

int main()
{
    int somaPar,numero;
    int somaImpar;

    somaPar = 0;
    somaImpar = 0;

    do
    {
        scanf("%d",&numero);
        if (numero%2==0)
        {
            somaPar= numero + somaPar;
        }
        else 
        {
            somaImpar= numero+somaImpar;
        }
    }while(numero!=0);

    printf("%d %d\n",somaPar,somaImpar);



    return 0;
}