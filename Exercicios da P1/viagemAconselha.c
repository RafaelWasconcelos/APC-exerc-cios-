#include <stdio.h>

int main() {
    int quantidade, dia = 1;

    while ( scanf("%d", &quantidade) != EOF ) {
        int melhorRestaurante, melhorNota;

        scanf("%d %d", &melhorRestaurante, &melhorNota);

        for ( int i = 0; i < quantidade - 1; i++ ) {
            int restaurante, nota;
            scanf("%d %d", &restaurante, &nota);

            if ( nota > melhorNota ) {
                melhorNota = nota;
                melhorRestaurante = restaurante;
            }
            
            else if ( nota == melhorNota && restaurante < melhorRestaurante ) {
                melhorRestaurante = restaurante;
            }
        }

        printf("Dia %d\n", dia);
        printf("%d\n", melhorRestaurante);

        dia++;
    }

    return 0;
}
