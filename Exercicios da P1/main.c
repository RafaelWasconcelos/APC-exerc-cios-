#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
const valorBase = 555;
float percentual, resultado;

setlocale(LC_ALL, "");



printf("Digite o valor percentual que deseja calcular em relação ao %d: ", valorBase);
scanf("%f", &percentual);
resultado = (percentual/100)*valorBase;
printf ("resultado = %.2f", resultado);


return 0;
}
   