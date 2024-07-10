#include <stdio.h>
#include <string.h>

int main ()
{
    char str[20];
    char str2[20];
    int i;


    scanf ("%s",str);

    printf("%s\n",str);

    printf("%lu\n", strlen(str));

    for ( i=0; str[i]!= '\0'; i++)
    {
    }
    printf("%d\n",i);



    return 0;
}