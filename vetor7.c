#include <stdio.h>

int main()
{
    int n,f;
    f=0;

    scanf("%d",&n);
    int vet[n];
    int vet2[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(int i=0;i<n;i++)
    {
        scanf("%d",&vet2[i]);
        if(vet2[i]==vet[i])
        {
            f++;
        }
    }

    if(f==n) // se a soma de de todos os f derem n siginifica que todos os valores são iguais ou seja vetores iguais//
    {
        printf("sim"); 
    }
    else
    {
        printf("nao");
    }

    



    return 0;
}