#include <stdio.h>

int main()
{
    int n,m,l,contaPar,contaImpar;

    contaPar =0;
    contaImpar=0;


    scanf("%d",&n);

    int par[n];
    int vet[n];
    int impar[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]%2==0)
        {
            par[contaPar]= i;
            contaPar=contaPar+1;
        }
        else
        {
            impar[contaImpar]= i;
            contaImpar=contaImpar+1;
        }
    }

    m = contaPar;
    l = contaImpar;

    for(contaPar=0;contaPar<m;contaPar++)
    {
      printf("%d ",par[contaPar]);  
    }

    printf("\n");

    for(contaImpar=0;contaImpar<l;contaImpar++)
    {
         printf("%d ",impar[contaImpar]);
    }

    return 0;
}