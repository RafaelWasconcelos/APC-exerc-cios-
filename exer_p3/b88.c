#include <stdio.h>

struct tipoFiliacao {
    char nome[80];
    char nomeMae[80];
    char nomePai[80];
};

struct tipoFiliacao separaLinhaCSV(char linha[240]) 
{
    int contav = 0, contai = 0;
    struct tipoFiliacao pessoa;
    int i, j;

    // Inicializa as strings com terminador nulo
    for (i = 0; i < 81; i++) {
        pessoa.nome[i] = '\0';
        pessoa.nomeMae[i] = '\0';
        pessoa.nomePai[i] = '\0';
    }

    for (i = 0; linha[i] != '\0'; i++) {
        if (linha[i] == ',') {
            contav++;
            contai = 0;
        } else {
            if (contav == 0) {
                pessoa.nome[contai++] = linha[i];
            } else if (contav == 1) {
                pessoa.nomeMae[contai++] = linha[i];
            } else if (contav == 2) {
                pessoa.nomePai[contai++] = linha[i];
            }
        }
    }

    return pessoa;
}

// int main() {
//     struct tipoFiliacao n;
//     n = separaLinhaCSV("Luiz Coelho, ,Tomas Coelho");
//     printf("Nome: %s\n", n.nome);
//     printf("Nome da Mae: %s\n", n.nomeMae);
//     printf("Nome do Pai: %s\n", n.nomePai);
//     return 0;
// }