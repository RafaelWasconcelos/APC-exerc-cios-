#include <stdio.h>

int main()
{
    int X,somaPar;

    
    somaPar=0;

    do 
    {
        scanf("%d",&X);
        if (X%2==0)
        {
            somaPar= somaPar+X;
        }
    }
    while(X!=0);
    printf("%d\n",somaPar);




    return 0;
}