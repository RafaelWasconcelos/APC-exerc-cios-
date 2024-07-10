#include <stdio.h>

int main()
{
    int i;
    int num;
    
    i=0;
    
    while(scanf("%d",&num)!=EOF)
    {
        i++;
    }


    printf("%d\n",i);
    return 0;
}