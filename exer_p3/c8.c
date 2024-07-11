#include <stdio.h>

    struct tipoData
    {
        int ano,mes,dia;
    };


    struct tipoPessoa 
    {
        char nome[80];
        struct tipoData dtNascimento;

    };


    struct tipoPessoa separaInfo(char nome[80],int dt_nascimento)
    {
        struct tipoData v;
        v.dia = ((dt_nascimento/10)%10)*10 + (dt_nascimento%10)*1;
        v.mes = ((dt_nascimento/1000)%10)*10 + ((dt_nascimento/100)%10);
        v.ano = ((dt_nascimento/10000000)%10)*1000 + ((dt_nascimento/1000000)%10)*100 +((dt_nascimento/100000)%10)*10 + ((dt_nascimento/10000)%10);
        struct tipoPessoa a = {nome,v}; 
    return a; 
    }




    int main ()
    {
        struct tipoPessoa b = separaInfo("dourado henrique",19941012);
        printf("%s\n",b.nome);
        printf("%d\n",b.dtNascimento.dia);


        return 0;
    }