#include <stdio.h>

int main()
{
    int n;
    char str[1002];
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++)
    {
        fgets(str,1002,stdin);
        for(int j=0;str[j]!='\0';j++)
        {
            if((str[j]>=65)&&(str[j]<=77))
            {
                str[j]=str[j]+13;
            }
            else if((str[j]>77)&&(str[j]<=90))
            {
               str[j]=str[j]-13; 
            }
            printf("%c",str[j]);
        }
    }

    return 0;
}
