#include <stdio.h>

int main ()
{
 int n, menor,menornumero;

 scanf("%d",&n);
 int vet[n];

 for(int i=0;i<n;i++)
 {
    scanf("%d",&vet[i]);
    if(i==0)
    {
        menor = i;
        menornumero = vet[i];
    }
    if(vet[i]<menornumero)
    {
        menor = i; 
        menornumero = vet[i];
    }
 }

    printf("%d",menor);


    return 0;
}