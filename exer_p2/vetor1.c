#include <stdio.h>

int main ()
{
    int n,i,menor,menor2,menor3;
    menor2= 1000000;
    menor3= 1000000;

    scanf("%d",&n);

    int vet[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
        if(i==0)
        {
            menor= vet[i]; //o primeiro que vai ser atribuido// 
        }
        if(vet[i]<=menor)
        {
            menor3=menor2;
            menor2=menor;
            menor= vet[i];
        }
        else if (vet[i]<=menor2)
        {
            menor3=menor2;
            menor2=vet[i];
        }
        else if (vet[i]<=menor3)
        {
          menor3=vet[i] ;
        }
        
    
    }

    printf("%d\n%d",menor2,menor3);

    return 0;
}