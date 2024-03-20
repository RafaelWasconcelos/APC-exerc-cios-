#include <stdio.h>

int main ()
{
    int J1, J2, E, resultado;
    char V1, V2, V3;

    do
    {
        printf("A VS B\nA:");
        scanf("%d%d%d", &E, &J1, &J2);
    }
    while (((E>1) || (E<0)) || ((J1>10) || (J2>10)) || ((J1<0) || (J2<0)));

    resultado = J1+J2;

    if (((resultado%2==0) && (E==0)) || ((resultado%2==1) && (E==1)))
    {
        V1='A'; 
    }
    else
        {
            V1='B';
        }

     do
     {
        printf("C VS D\nC:");
        scanf("%d%d%d", &E, &J1, &J2);
     }
    while (((E>1) || (E<0)) || ((J1>10) || (J2>10)) || ((J1<0) || (J2<0)));

    resultado = J1+J2;

    if (((resultado%2==0) && (E==0)) || ((resultado%2==1) && (E==1)))
    {
        V2='C'; 
    }
    else
        {
            V2='D';
        }
    
    do
     {
        printf("%c vs %c\n%c:", V1, V2, V1);
        scanf("%d%d%d", &E, &J1, &J2);
     }
    while (((E>1) || (E<0)) || ((J1>10) || (J2>10)) || ((J1<0) || (J2<0)));

    resultado = J1+J2;
    
    if (((resultado%2==0) && (E==0)) || ((resultado%2==1) && (E==1)))
    {
         V3=V1; 
    }
    else
        {
             V3=V2;
        }

    printf("%c", V3);


return 0;
} 