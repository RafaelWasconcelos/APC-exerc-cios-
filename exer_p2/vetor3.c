#include <stdio.h>

int main()
{
    int n,i,p;

    scanf("%d",&n);

    int vet[n];
    int par[n];
    int impar[n];

    int contaPar =0;
    int contaImpar =0;

    for (int i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);

        if (vet[i]%2==0)
        {
            par[contaPar]=vet[i];
            contaPar=contaPar+1;
        }
        else
        {
            impar[contaImpar]=vet[i];
            contaImpar=contaImpar+1;
        }
    }

    p=contaPar;
    i=contaImpar;

    for(contaPar=0;contaPar<p;contaPar++)
    {
        printf("%d ",par[contaPar]);
    }
    
    printf("\n");
    
    for(contaImpar=0;contaImpar<i;contaImpar++)
    {
        printf("%d ",impar[contaImpar]);
    }


    return 0;
}