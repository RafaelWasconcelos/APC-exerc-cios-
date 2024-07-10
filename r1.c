#include <stdio.h>

int main()
{
    unsigned int n;
    unsigned int somatorio=0;
    scanf("%u",&n);
    unsigned int vet[n];
    unsigned int maior[n];
    unsigned int contador,media,m=0;

    for (int i=0;i<n;i++)
    {
        scanf("%u",&vet[i]);
        somatorio+=vet[i];
    }
    media=(somatorio/n);

    int j=0;

     for (int i=0;i<n;i++)
     {
        if(vet[i]>media)
        {
            m=vet[i];
            maior[j]=m;
            j++;
        }
     }

     for (int i=0;i<j;i++)
     {
        printf("%u",maior[i]);
     }

    if(j==0)
    {
        printf("0");
    }



    return 0;
}