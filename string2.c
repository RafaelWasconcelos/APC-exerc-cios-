#include <stdio.h>

int main()
{
    int i=0;
    int n=100;
    char str[n];
    scanf("%[^\n]",str); //"%[^\n]" -- isso faz ler espaços //

    for(i=0;str[i]!='\0';i++)  //O i vai ficar com a posição do '\0', poia o i é adicionado ao final do for// 
    {
        
    }
    i--;
    while(i!=-1)
    {
        printf("%c - %d\n",str[i],str[i]);
        i--;
    }
        






    return 0;
}
    
   
