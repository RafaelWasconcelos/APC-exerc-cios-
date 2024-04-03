#include <stdio.h>

int main()
{
    float  p1,p2,p3;
    float  t;
    float  l1, l2, l3, l4, l5, mediaFinalApc, mediaListas;

    do 
    {
        scanf("%f%f%f",&p1, &p2, &p3);
        scanf("%f", &t);
    } while ((p1<0)||(p1>10)||(p2<0)||(p2>10)||(p3<0)||(p3>10)||(t<0)||(t>10));

    do
    {
        scanf("%f%f%f%f%f", &l1,&l2,&l3,&l4,&l5);    
    } while ((l1<0)||(l1>01)||(l2<0)||(l2>01)||(l3<0)||(l3>01)||(l4<0)||(l4>01)||(l5<0)||(l5>01));
    mediaListas = ((l1+l2+l3+l4+l5)/10);
    mediaFinalApc = ((p1+2*p2+3*p3+2*t)/8) +mediaListas;
    printf("%.2f\n",mediaFinalApc);

    


    return 0;
}
