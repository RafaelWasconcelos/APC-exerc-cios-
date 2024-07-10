#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

bool ehPrimoArrojado(int num) {
    while (num > 0 && ehPrimo(num)) {
        num /= 10;
    }
    return num == 0;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int numero;
        scanf("%d", &numero);

        if (ehPrimoArrojado(numero)) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }

    return 0;
}
