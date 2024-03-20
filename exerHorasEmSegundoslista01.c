#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int hora, minuto, segundo;
    printf("Digite um valor númerico para hora maior ou igual a 0\n");
    scanf("%u", &hora);
    minuto = 60*hora;
    segundo = 60*minuto;
    printf("%u\n%u\n", minuto, segundo);

    return 0;
}
