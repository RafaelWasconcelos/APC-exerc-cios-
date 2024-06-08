#include <stdio.h>

 int main()
 {
    int T,B,M,H;
    char vencedor;

    H=70;
    M=160;

    scanf("%d",&B);
    scanf("%d",&T);

    if (((B*H - (B-T)*H/2)> ((M-T)*H - (B-T)*H/2)) || ((B*H + (T-B)*H/2) > ((M-T)*H + (T-B)*H/2))) 
    {
        vencedor ='1';
    }

    else if (((B*H - (B-T)*H/2) == ((M-T)*H - (B-T)*H/2)) || ((B*H + (T-B)*H/2) == ((M-T)*H + (T-B)*H/2)))
    {
        vencedor = '0';
    }

    else 
    {
        vencedor='2';
    }
    printf("%c",vencedor);  






    return 0;

 }















