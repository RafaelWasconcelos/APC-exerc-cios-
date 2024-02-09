#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char caracter;

    printf("Digite um caracter: ");
    scanf("%c", &caracter);

    system("CLS");

    printf(" caractere: %c \n decimal: %d \n octal: %o \n hexadecimal: %x", caracter, caracter, caracter, caracter);

    return 0;
}
