#include <stdio.h>

int main()
{
    unsigned long long int hora, segundo, minuto;
    scanf("%llu", &hora);
    minuto = 60*hora;
    segundo = 60*minuto;
    printf("%llu\n%llu\n", minuto, segundo);

    return 0;
}
