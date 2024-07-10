#include <stdio.h>

int main() {
    long int T, G, n = 0, A;

    scanf("%ld%ld", &T, &G);

    for(int i = 0; i < G; i++) {
        if(n == 0) {
            while( T != n*n) {
                n++;
            }
        }

        if(n % 2 == 0) {
            n = n/2;
        }

        n = 2*n - 1;
   
        A =  n*n;

        printf("%ld\n", A);
    }

    return 0;
}
