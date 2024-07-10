#include <stdio.h>

int contarEstrelas(int qtd, int abertura)
{
    int f, i,m=0;
    while(i!=qtd)
    {
        scanf("%d",&f);
        i++;
        if((abertura*f)>=40000000)
        {
            m++;
        }
    }
return m;
}