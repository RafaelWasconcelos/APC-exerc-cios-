#include <stdio.h>

int main ()
{
    int i;
    char str[10]; // 100 letras porém precisa do \0 ou seja 101 para fgetc seriam 102 por conta do \n // 

    scanf("%[^\n]",str);
    printf("%s\n",str);
    for(i=0;str[i]!='\0';i++)
    {

    }
    printf("%c\n",str[i-1]);
    





}