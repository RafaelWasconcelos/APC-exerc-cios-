#include <stdio.h> 
#include <math.h>

    struct tipoPonto
    {
        double x;
        double y;
    };




    double distancia (struct tipoPonto pa,struct tipoPonto pb) 
    {
        double result;
        result=sqrt(pow((pa.x-pb.x),2) + pow((pa.y-pb.y),2));
    return result;
    }