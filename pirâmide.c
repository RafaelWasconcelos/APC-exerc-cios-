#include <stdio.h>

int main()
{
    int N,K,K1,K2,K3;

    scanf("%d",&N);
    
    for(K=0;K<=N;K++)
    {
        for (K1=0;K1<K;K1++)
        {
            printf("%02d ",K);
        }
        printf("\n");    
    }

    printf("\n");  

    for(K2=1;K2<=N;K2++)
    {
        for(K3=1;K3<=K2;K3++)
        {
            printf("%02d ",K3);   
        }
     printf("\n");     
    }


    return 0;
}