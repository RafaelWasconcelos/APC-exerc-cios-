// #include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    int m = tB-tA;
    double n = distancia/(m/3600);
return n;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    int m = tB-tA;
    double n = distancia/(m/3600);
    if(n>velocidadeMaxima)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// int main()
// {
//     int c=levouMulta(54169,57346,170.0,120.0);
//     printf("%d",c);
// }


