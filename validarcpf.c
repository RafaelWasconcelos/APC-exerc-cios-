#include <stdio.h>

int main()

{
    unsigned long long int cpf, v1, v2, m1, m2;
    unsigned long long int a,b,c,d,e,f,g,h,i;

    scanf("%llu",&cpf);

    m2= cpf%10;
    m1= cpf/10%10; 
    a = cpf/100%10;
    b = cpf/1000%10;
    c = cpf/10000%10;
    d = cpf/100000%10;
    e = cpf/1000000%10;
    f = cpf/10000000%10;
    g = cpf/100000000%10;
    h = cpf/1000000000%10; 
    i = cpf/10000000000%10;

    v1 = 11 - (a*2+b*3+c*4+d*5+e*6+f*7+g*8+h*9+i*10)%11;

    if (v1>=10)
    {
        v1=0;
    }

    v2 = 11 - (v1*2+a*3+b*4+c*5+d*6+e*7+f*8+g*9+h*10+i*11)%11;

     if (v2>=10)
    {
        v2=0;
    }

    if ((m1==v1)&&(m2==v2))
    {
        printf("valido");
    }

    else 
    {
        printf ("invalido");
    }



    return 0;
}