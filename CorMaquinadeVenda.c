#include <stdio.h>

int main(int argc, char const *argv[])
{
    int P,V, troco;
    int moeda500, moeda100, moeda50, moeda10, moeda05, moeda01;

    printf("Digite o valor do produto em ienes\n");
    scanf("%d", &P);
    printf("Digite o valor que você pagou em ienes\n");
    scanf("%d",&V);
    troco = (V-P);
    
    moeda500 = troco/500; 
    moeda500 %= 500;

    moeda100 = troco/100;
    moeda100 %= 100;

    moeda50 = troco/50;
    moeda50 %= 50;

    moeda10 = troco/10;
    moeda10 %= 10;

    moeda05 = troco/05;
    moeda05 %= 05;

    moeda01 = troco/01;
    moeda01 %= 01; 

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", moeda500, moeda100, moeda50, moeda10, moeda05, moeda01);




    return 0;
}

