#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned int contastr,maior;
    scanf("%u",&n);
    char str[100];



    for (int i=0;i<n;i++)
    {
        scanf("%s",str);
        for(contastr=0;str[contastr]!='\0';contastr++)
        {

        }
        if((i==0)||(contastr>maior))
        {
            maior=contastr;
        }
    }
    printf("%u",maior);




    return 0;
}