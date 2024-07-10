#include <stdio.h>

int main()
{
    int n,m,f;
    f=0;

    scanf("%d",&n);
    int vet[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
    }

    scanf("%d",&m);

    for(int i=0;i<n;i++)
    {
        if(m==vet[i])
        {
            f=f+1;
        }
    }

    if(f!=0)
    {
        printf("pertence");
    }
    else 
    {
        printf("nao pertence");
    }



    return 0;
}