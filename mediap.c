#include <stdio.h> 

int main()
{
    double  valor1,valor2,peso1,peso2;
    double  valorMedio; 

    do
    {
        scanf("%lf",&valorMedio);
        scanf ("%lf",&valor2);
        scanf ("%lf%lf",&peso1,&peso2);

        valor1= valorMedio*(peso1+peso2)/peso1 - (valor2*peso2)/peso1;

    } while ((peso1<=0)||(peso1>100)||(peso2<=0)||(peso2>100)||(valorMedio<0)||(valorMedio>1000000000)||(valor2<0)||(valor2>1000000000));
    printf("%lf\n",valor1);
}