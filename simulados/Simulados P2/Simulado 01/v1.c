#include <stdio.h>

int main()
{
    int menor= 1000000;
    int menor2= 1000000;
    int menor3= 1000000;
    int n;

    scanf("%d",&n);
    int vet[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
        if(i==0)
        {
            menor=vet[i];
        }
        if(vet[i]<menor)
        {
            menor3=menor2;
            menor2=menor;
            menor=vet[i];
        }
        else if(vet[i]<menor2)
        {
            menor3=menor2;
            menor2=vet[i];
        }
        else if(vet[i]<menor3)
        {
           menor3=vet[i]; 
        }
    }

    printf("%d\n%d",menor2,menor3);






    return 0;
}