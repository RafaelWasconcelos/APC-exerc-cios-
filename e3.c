#include <stdio.h>

int main()
{ 
     int r;
     float i;

    scanf("%d",&r);


     if(r<2000)
     {
        i=0;
     }

     else if (r>=2000 && r<2800)
     {
         if(r/2000!=0)
         {
           i= (800)*7.5/100; 
         }
     }

     else if  (r>=2800)
     {
        i= ((r-2800)-(r-2800)%900)*7.5/100;
     }

     else if  (r> 3700)
     {
        i= ((r-3700)-(r-3700)%900)*7.5/100;
     }

     else if  (r>4600)
     {
        i= ((r-4600)-(r-4600)%900)*7.5/100;
     }

     printf("%f",i);



}