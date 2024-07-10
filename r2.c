#include <stdio.h>

int main()
{
    char str[60],vg[60];
    int j,conta,f=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++)
    {
        if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u'))
        {
            vg[j]=str[i];
            j++;
        }
    }

    vg[j]='\0';
    f=j;
    j=j-1;

    int m;

    for(m=0;vg[m]!='\0';m++,j--)
    {
        if(vg[m]==vg[j])
        {
            conta++;
        }
    }

    if(f==0)
    {
        printf("valor invalido!");
    }
    else if(conta==m)
    {
        printf("S");
    }
    else if(conta!=m)
    {
        printf("N");
    }




    return 0;
}