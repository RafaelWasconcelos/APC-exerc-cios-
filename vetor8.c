#include<stdio.h> 
int main()
{
    long int n,media,contaMaior,f;
    scanf("%ld",&n);
    long int vet[n];
    long int maiores[n];

    media=0;
    contaMaior=0;

    for(int i=0;i<n;i++)
    {
        scanf("%ld",&vet[i]);
        media = media+vet[i]; //porque não posso calcular média como media + vet[i]/n??
    }
    media= media/n;

     for(int i=0;i<n;i++)
     {
        if(vet[i]>media)
        {
            maiores[contaMaior]=vet[i];
            contaMaior=(contaMaior+1);
        }
     }

    f=contaMaior;
    if(f!=0)
    {
        for(int i=0;i<contaMaior;i++)
        {
            printf("%ld ",maiores[i]);
        }
    }

     if(f==0)
     {
        printf("0");
     }

    return 0;
}
