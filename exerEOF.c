#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int vet[n];
    i=0;
    do
    {
        scanf("%d",&vet[i]);
        i++;
    }while(vet[i]!=EOF);

    printf("%d",i);
    return 0;
}