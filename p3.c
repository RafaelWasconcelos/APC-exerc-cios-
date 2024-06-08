#include <stdio.h>

int main()
{
    int linha, coluna, K, K1;

    scanf("%d%d",&linha,&coluna);

    for (K1=0;K1<linha;K1++)
    {
        for(K=0;K<coluna;K++)
        {
            printf("[%03d,%03d]",K1,K);
        }
    }



    return 0;
}