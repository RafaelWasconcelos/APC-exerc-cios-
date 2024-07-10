#include <stdio.h>

// float pesokg;
// pesokg=-1.0; 

// int validaPeso(double pesokg)
// {

// }

int validaPeso(double pesokg){
    if(pesokg<0)
    {
        return 0;
    }
    else if (pesokg>=0)
    {
        return 1;
    }
}


void fazTonelada( double pesokg ){
    printf("%.4lf\n",pesokg/1000);
}

void fazGrama( double pesokg ){
    printf("%.4lf\n",pesokg*1000);
}

// int main ()
// {
//     double m = 2;
//     fazGrama(m);




//     return 0;
// }