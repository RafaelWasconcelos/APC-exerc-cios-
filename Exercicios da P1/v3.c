#include <stdio.h>

int main()
{
    int n,coluna;
    int maior,somatorio=-1;
    scanf("%d",&n);
    int m[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    for(int j=0;j<n;j++)
    {
        somatorio=0;
        for(int i=0;i<n;i++)
        {
            somatorio+=m[i][j];
        }
        if(somatorio>maior)
        {
            maior=somatorio;
            coluna=j+1;
        }
    }

    if(maior==0)
    {
        printf("0");
    }
    else
    {
        printf("%d",coluna);
    }



    return 0;
}