#include <stdio.h>

int main ()
{
    int N,K;

    scanf("%d",&N);

    for(K=1;K<=N;K++)
    {
        if((K%2)==0)
        {
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
        else
        {
            printf("THUMS THUMS THUMS\n");
        }
    }
    

    return 0;
}