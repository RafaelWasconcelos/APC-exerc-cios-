// Teste feito, basta jogar no cd moj depois. A logica é a mesma; 
// quando joga 4 e 1 sai A, mas foi pq a minha logica é de saida n é o B, e sim o A! :)

#include <stdio.h>

int main() {
    int valor, valor2;
    char vencedor;

    scanf("%d%d", &valor, &valor2);

    while(1) {
        if (valor == valor2) {
            printf("empate");
            break;
        }

        switch (valor) {
            case 0:
                if (valor2 == 1 || valor2 == 4)
                    vencedor = 'B';
                else
                    vencedor = 'A';
                break;
            case 1:
                if (valor2 == 2 || valor2 == 3)
                    vencedor = 'B';
                else
                    vencedor = 'A';
                break;
            case 2:
                if (valor2 == 0 || valor2 == 4)
                    vencedor = 'B';
                else
                    vencedor = 'A';
                break;
            case 3:
                if (valor2 == 0 || valor2 == 2)
                    vencedor = 'B';
                else
                    vencedor = 'A';
                break;
            case 4:
                if (valor2 == 1 || valor2 == 3)
                    vencedor = 'A';
                else
                    vencedor = 'B';
                break;
            default:
                break;
        }

        if (valor < 0 || valor > 4 || valor2 < 0 || valor2 > 4) {
            scanf("%d%d", &valor, &valor2);
        } else {
            break; 
        }
    } 
    
    printf("%c", vencedor);

    return 0;
}