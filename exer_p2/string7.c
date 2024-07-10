
#include <stdio.h>

int main()
{
    int n;
    int maior,contamaior,contam,j=0;
    char str[42],str2[42];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        contamaior=0;
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
        {
            str2[i]=str[i];
        }
        for(j=0;str[j]!='\0';j++)
        {
            if((str[j]>=65)&&(str[j]<=90))
            {
                str[j]=str[j]+32;
                contam++;
            }
            if(j==0)
            {
                maior=str[j];
                contamaior++;
            }
            else if(str[j]>maior)
            {
                contamaior++;
                maior=str[j];
            }
        }

        if(contamaior==(j))
        {
            for(int n=0;str[n]!='\0';n++)
            {
                printf("%c",str2[n]);
            }  
            printf(": O\n");
        }

        else if(contamaior!=j)
        {
            for(int n=0;str[n]!='\0';n++)
            {
                printf("%c",str2[n]);
            }  
            printf(": N\n");
        }
    }
        return 0;
}