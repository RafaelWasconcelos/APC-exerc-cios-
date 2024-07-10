# include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    int p,soma;
    for(int i=0;i<parcelas;i++)
    {
        scanf("%d",&p);
        if(i==0)
        {
            soma=p;
        }
        else if(op=='+')
        {
            soma+=p;
        }
        else
        {
            soma-=p;
        }
    }
    return soma;
}

// int main()
// {
//     int n = faz_conta_direito(4,'-');
//     printf("%d",n);


// }