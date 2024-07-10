    // //     int fatorial=(i+1);
    //     //     fatorial*=(i+1);

    //     //     for (int j=0;j<i;j++)
    //     //     {
    //     //         if (i==0)
    //     //         {
    //     //             p = 1;
    //     //         }
    //     //         else 
    //     //         {
    //     //             x*=x;
    //     //         }
    //     //     }
    //     // p=p+x/fatorial;
    //     // }
    
    // #include <stdio.h> /// 

    double exp_natural(int x,int n)
    {
        double p=1;
        int fatorial=1;
        double potencia=1;

        for (int i=0;i<n;i++)
        {
            int m =i+1;
            fatorial = fatorial*m;
            potencia = potencia*x;
            p=p+(potencia/fatorial);
        }
        return p;
    }

    // int main()
    // {
    //     double b;
    //     b=exp_natural(3,4);
    //     printf("%.2f",b);

    //     return 0;
    // }