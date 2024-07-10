 #include <stdio.h> 

int main() 
{
    int n;
    scanf("%d",&n);
    int vet[n];
    int menor[n];
    int contaMenor;

    contaMenor=0;
    menor[contaMenor]=1000000;

    for(int i=0;i<n;i++)
    {
        if(contaMenor!=0)
        {
            scanf("%d",&vet[i]);
        }
        if((vet[i]<menor[contaMenor-1])&&(contaMenor!=0))
        {
            menor[contaMenor]=vet[i];
        } 
        contaMenor=contaMenor+1;
    }
    for(int i=1;i<n;i++)
    {
            printf("%d",menor[i]);   
    }



    return 0;
} 
