#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m[n][n];
    int somatorio,maior=-1;
    int j,coluna;

    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for (j=0;j<n;j++)
    {
        somatorio=0;
        for (int i=0;i<n;i++)
        {
            somatorio+=m[i][j];
        }
        if(somatorio>maior)
        {
            maior=somatorio;
            coluna=j+1;
        }   
    }

    if(somatorio==0)
    {   
        printf("0");
    }
    else
    {
        printf("%d",coluna);    
    }

    return 0;
}