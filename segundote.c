#include <stdio.h>

int main ()
{
    int n,i,menor;

    scanf("%d",&n);

    int vet[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
        if(i==0)
        {
            menor= vet[i]; //o primeiro que vai ser atribuido// 
        }
        if(vet[i]<menor)
        {
            menor= vet[i];
        }
    }

    printf("%d",menor);

    return 0;
}