#include <stdio.h>

int main()

    {
    int contador, jogos, v,a,b,kv;

    scanf("%d",&jogos);

    for(contador=0,a=0,b=0;contador<jogos;contador++)
    {
        scanf("%d",&v);
        if(v==0)
        {
            a=a+1;
        }
        else if(v==1)
        {
            b=v+b;
        }
    }
    printf("Alice ganhou %d e Beto ganhou %d",a,b);





    return 0;
    }