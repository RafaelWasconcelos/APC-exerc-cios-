#include <stdio.h> 

int main()
{
    int N,X,K, soma;

    do 
        scanf("%d",&N);
    while((N<0)||(N>50));

    for (K=0,soma=0;K<N;K++)
    {
        do
            scanf("%d",&X);
        while((X<-5000)||(X>5000));
        soma = X + soma;
    }

    printf("%d\n",soma);
    return 0; 
}