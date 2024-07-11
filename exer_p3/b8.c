#include <stdio.h>

struct tipoFiliacao
{
    char nome[81];
    char nomeMae[81];
    char nomePai[81];
};



struct tipoFiliacao separaLinhaCSV(char linha [240]) 
{
    int contav=0,contai=0,i=0,j=0,m=0,x=0;
    struct tipoFiliacao pessoa;

    for (i=0;linha[i]!='\0';i++)
    {
        if((linha[i]==',')&&(contav==0))
        {
            contav=contav+1;
            for(int j=0;linha[j]!=',';j++)
            {
                pessoa.nome[j]=linha[j];
            }
            contai=i+1;
        }
        else if ((linha[i]==',')&&(contav==1))
        {
            contav=contav+1;
            for(j=0,contai ; linha[contai]!=',' ; j++,contai++)
            {
                pessoa.nomeMae[j]=linha[contai];
            } 
            contai=i+1;
        }
        else if (linha[i]==',')
        {
            for(j=0,contai ; linha[contai]!=',' ; j++,contai++)
            {
                pessoa.nomePai[j]=linha[contai];
            } 
        }
        
    }

    pessoa.nome[i]='\0';
    pessoa.nomeMae[i]='\0';
    pessoa.nomePai[i]='\0';

    return pessoa;
}


int main()
{
    struct tipoFiliacao n;
    n = separaLinhaCSV("roberto,mae,lucas");
    printf("%s",n.nome);
    return 0;
}