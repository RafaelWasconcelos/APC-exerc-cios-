#include <stdio.h>

int main()
{
    int n=60;
    int contavogal= 0;
    char str[n];
    char strv[n];

    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            strv[contavogal]=str[i];
            contavogal++;
        }
    }

    strv[contavogal] = '\0';

    int j=contavogal-1;
    int i=0;
    int stop=0;

    for(i=0;strv[i]!='\0';i++,j--)
    {
        if(strv[i]==strv[j])
        {
            stop++;
        }
    }

    if (contavogal==0)
    {
        printf("Valor invalido!");
    }
    

    else if(stop==i)
    {
        printf("S");
    }

    else if (stop!=i)
    {
        printf("N");
    }

    
return 0;
}