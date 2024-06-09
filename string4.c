#include<stdio.h>

int main()
{
    int n=100;
    int v,i;
    char str[n];
    scanf("%[^\n]",str);
    v=0;  //v =0 para imprimir apenas o primeiro nome de primeira//

    for(i=0;str[i]!='\0';i++)
    {
        if((v==0)&&(str[i]>90)) // >90 por conta da tabela asci onde os mínusculos ficam depois de 90
        {
            printf("%c",str[i]);
        }

        else if((v==0)&&(str[i]>=65)&&(str[i]<=90))
        {
            printf("%c",str[i]+32); // manipulação pra transformar em maiusculo por conta da tabela asci
        }
        
        if(str[i]==' ')
        {
            v=i; // variável que tem a quebra, sempre vai ser pega a última por conta da redefinição de v=i// 
        }
    } 
    printf("."); 

    for(v=v+1;str[v]!='\0';v++) // após v podemos percorrer a string para escrever o ultimo nome
    {
        if(str[v]>90)
        {
            printf("%c",str[v]);
        }
        else if((str[v]>=65)&&(str[i]<=90))
        {
            printf("%c",str[v]+32);  
        }
    }
    printf("@unb.br"); 
    

    return 0;
}