#include <stdio.h>
int main()
{
    int n,m,x;
    scanf("%d%d",&n,&m);
    char str[80][n],str2[80][m];
    int conta=0;

    for(int i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }

    for(int i=0;i<m;i++)
    {
        scanf("%s",str2[i]);
    }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(x=0;str[x]!='\0';x++)
                {
                    if(str[x][i]==str2[x][j])
                    {
                        conta++;
                    }
                }
            }
        }

        if(conta==x)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }

    return 0;
}