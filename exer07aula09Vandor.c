#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(int argc, char const *argv[])
{
    int opcao;
    setlocale(LC_ALL, "Portuguese.UTF-8");

    printf("Em qual região do Brasil você gostaria de morar? \n =============== \n 1 - Norte \n 2 - Nordeste \n 3 - Centro-Oeste \n 4 - Sudeste \n 5 - Sul \n 0 - Sair do programa \n ");
    scanf("%d",&opcao);
    system("CLS");
    switch(opcao) {
        case 1: 
            printf ("Norte");  
            break;
        case 2: 
            printf ("Nordeste") ;
            break;
        case 3: 
            printf ("Centro Oeste") ;
            break;
        case 4: 
            printf ("Sudeste");
            break;
        case 5: 
            printf ("Sul");
            break;
        case 0: 
            break;
        default:
            printf ("opção inválida");
    }



    return 0; 
}
