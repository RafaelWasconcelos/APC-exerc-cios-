#include <stdio.h>

int main()
{
    int n;
    int maior,contamaior,j=0;
    char str[42];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",str);
        for(j=0;str[j]!='\0';j++)
        {
            if(j==0)
            {
                maior=str[j];
            }
            else if(str[j]>maior)
            {
                contamaior++;
            }
        }
        if(contamaior=j-1)
        {
            printf("%c: O",str);
        } 
        else
        {
            printf("%c: N",str);
        }
    }
        return 0;
}

