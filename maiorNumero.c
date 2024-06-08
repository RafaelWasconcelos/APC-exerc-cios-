#include <stdio.h>

int main ()

{
    int num1, num2, num3, num4;
    int maior;

    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
    
    if((num1>=num2)&&(num1>=num3)&&(num1>=num4))
    {
        maior = num1;
    }

    if ((num2>num1)&&(num2>=num3)&&(num2>=num4))
    {
        maior= num2;
    }

    if ((num3>num1)&&(num3>num2)&&(num3>=num4))
    {
        maior= num3;
    }

    if ((num4>num1)&&(num4>num2)&&(num4>=num3))
    {
        maior= num4;
    }

    printf("%d\n",maior);


    





    return 0;
}