#include <stdio.h>

int main()
{
    int P,V, troco;
    int i500, i100, i50, i10, i05, i01;
    
    scanf("%d", &P);
    scanf("%d",&V);
    troco = (V-P);
    
    i500 = troco/500; 
    i500 %= 500;

    i100 = troco/100;
    i100 %= 100;

    i50 = troco/50;
    i50 %= 50;

    i10 = troco/10;
    i10 %= 10;

    i05 = troco/05;
    i05 %= 05;

    i01 = troco/01;
    i01 %= 01; 

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", i500, i100, i50, i10, i05, i01);




    return 0;
}

