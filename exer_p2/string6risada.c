#include <stdio.h>

int main()
{
    int n=60;
    int contav,a,e,i,o,u= 0;
    char str[n];
    char strv[n];

    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            strv[contav]=str[i];
            contav++;
        }
        // if((contav>1) && (str[contav]>str[contav-1]))
        // {

        // }
    }

    for(int i=0;str[i]!='\0';i++)
    {
        if((i>0)&&(str[i-1]=='a')&&((str[i]=='u')||(str[i]=='e')||(str[i]='a'))&&((e==0)||(i==0)||(o==0)||(u==0)))
        {
            a++;
        }
        else if((i>0)&&(str[i-1]=='e')&&((str[i]=='a')||(str[i]=='i')||(str[i]='e'))&&((a==0)||(i==0)||(o==0)||(u==0)))
        {
            e++;
        }
        else if((i>0)&&(str[i-1]=='i')&&((str[i]=='e')||(str[i]=='o')||(str[i]='i'))&&((a==0)||(e==0)||(o==0)||(u==0)))
        {
            i++;
        }
        else if((i>0)&&(str[i-1]=='o')&&((str[i]=='i')||(str[i]=='u')||(str[i]='o'))&&((a==0)||(e==0)||(i==0)||(u==0)))
        {
            o++;
        }
        else if((i>0)&&(str[i-1]=='u')&&((str[i]=='o')||(str[i]=='a')||(str[i]='u'))&&((a==0)||(e==0)||(i==0)||(o==0)))
        {
            u++;
        }
    }

    if((a==0)&&(e==0)&&(i==0)&&(o==0)&&(u==0))
    {
        printf("Valor invalido!");
    }
    else if ((a==contav-1)&&(e==contav-1)&&(i==contav-1)&&(o==contav-1)&&(u==contav-1))
    {
        printf("S");
    }
    else if ((a!=contav-1)||(e!=contav-1)||(i!=contav-1)||(o!=contav-1)||(u!=contav-1))
    {
        printf("N");
    }
    
    

    return 0;
}
