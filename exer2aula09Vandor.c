

#include <stdlib.h>

int main(int argc, char const *argv[])
{
   float numero1,numero2, numero3, maiorNumero;
   printf("Digite o 1º numero, 2º numero, 3º numero ");
   scanf("%f%f%f",&numero1,&numero2,&numero3);

   if ((numero1>=numero2) && (numero1>=numero3)) 
   {
    maiorNumero=numero1;
   }
   else if (numero2>=numero3)
   {
    maiorNumero=numero2;
   }
   else
   {
    maiorNumero=numero3;     
   }

   printf("Maior número = %.2f", maiorNumero); 
  

    return 0;
}
