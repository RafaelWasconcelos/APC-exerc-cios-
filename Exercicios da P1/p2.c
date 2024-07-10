#include <stdio.h>

int main()
{

    int K,K1,N;

    scanf("%d",&N);

    for(K=1;K<=N;K++)
    {
        for (K1=1;K1<=K;K1++)
        {
            printf("%02d ",K);
        }
        printf("\n");
    }
    printf("\n");

    for(K=1;K<=N;K++)
    {
        for (K1=1;K1<=K;K1++)
        {
            printf("%02d ",K1);
        }
        printf("\n");
    }




    return 0;
}