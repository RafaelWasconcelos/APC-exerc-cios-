#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const int minimo = 0;
    const int maximo1 = pow(10,9);
    const int maximo2 = 100;

    double mediaPonderada, valor1, valor2, peso1, peso2;

    printf("Digite o valor da media ponderada: ");
    scanf("%lf", & mediaPonderada );
    if ((mediaPonderada<minimo) || (mediaPonderada>maximo1))  {
        printf("Erro, o valor informado precisa ser de 0 até 10^9");
    }else{
        printf("Digite o valor do segundo conjunto ");
        scanf("%lf", & valor2 );
        }if ((valor2<minimo)|| (valor2>maximo1)){
            printf ("Erro, o valor informado precisa ser de 0 até 10^9");
        }else{
            printf("Digite o peso do primeiro e segundo conjunto respectivamente: ");
            scanf("%lf%lf", &peso1, &peso2);
            valor1 = ((peso1+peso2)*mediaPonderada - valor2*peso2)/peso1;
            printf("Primeiro Conjunto = %lf", valor1);
        }
    return 0;
}
