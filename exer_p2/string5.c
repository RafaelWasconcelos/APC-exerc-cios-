#include <stdio.h>
int main()
{
    int t=101;
    int i=0;
    int contao=0;
    char str[t];
    
    
    while(scanf("%s",str)!=EOF)
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='o')
            {
            contao++;
            }
        }
    }





    // for(i=0;str[i]!='\0';i++)
    // {
    //     if(str[i]=='o')
    //     {
    //         contao++;
    //     }
    // }
    printf("%d",contao);
    
    



     return 0;
}
