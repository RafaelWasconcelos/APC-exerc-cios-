// #include <stdio.h>

// int main()
// {
//     int f,l;
//     int i2,j2;
//     int i,j;
//     // int n = 500;
//     char lugar[3];
//     scanf("%d%d",&f,&l);
//     char matriz[f+1][l];

//     for (i=0;i<l;i++)
//     {
//         for (j=0;j<f+1;j++)
//         {
//             matriz[i][j]='-';
//         }
//     }

//     for (j2=0;j2<1;j2++)
//     {
//         for (i2=l;i2>0;i2--)
//         {
//             matriz[i2][j2]=i2;
//             matriz[i2][j2]+=64;
//             // printf("%c",matriz[i2][j2]);
//             // printf("\n");
//         }
//     }

//  int c,d,e,f;

   
//     while(scanf("%s",lugar)!=EOF)
//     {
//         for(int i=0;lugar[i]!='\0';i++)
//         {
//             if((lugar[i-1]>=65) && (lugar[i-1]<=90)&&(i-1==0)&&(lugar[i]>=48)&&(lugar[i]<=57))
//             {
//                 lugar[i-1]-=12; //errado//z
//                 c=lugar[i-1];
//                 d=lugar[i];
//                 // d = lugar[i];
//                 matriz[c][d]=lugar;
//             }
//             else if((lugar[0]>=65)&&(lugar[0]<=90)&&(lugar[i-1]>=48)&&(lugar[i-1]<=57)&&(i-1==1)&&(lugar[i]>=48)&&(lugar[i]<=57))
//             {
//                 lugar[0]-=12;
//                 f=lugar[0];
//                 e=lugar[i-1]+lugar[i]+1;
//                 matriz[f][e]=lugar;
//             }
//         }
//     }



#include <stdio.h>

int main() {
    int f, l;
    char lugar[4];
    
    // Lê a quantidade de fileiras e lugares por fileira
    scanf("%d%d", &f, &l);
    
    // Cria a matriz para representar a sala de cinema
    char matriz[f][l][3];
    
    // Inicializa a matriz com "--" para indicar assentos vazios
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < l; j++) {
            matriz[i][j][0] = '-';
            matriz[i][j][1] = '-';
            matriz[i][j][2] = '\0';
        }
    }
    
    // Lê os bilhetes e marca os assentos ocupados
    while (scanf("%s", lugar) != EOF) {
        int row = lugar[0] - 'A'; // converte a letra para o índice da linha
        int col;
        
        // Verifica se o lugar tem um ou dois dígitos
        if (lugar[2] == '\0') {
            col = lugar[1] - '1'; // para lugares de um dígito
        } else {
            col = (lugar[1] - '0') * 10 + (lugar[2] - '1'); // para lugares de dois dígitos
        }
        
        // Marca o lugar como ocupado
        matriz[row][col][0] = 'X';
        matriz[row][col][1] = 'X';
    }
    
    // Imprime o cabeçalho dos números das colunas
    printf("  ");
    for (int j = 0; j < l; j++) {
        printf("%02d ", j + 1);
    }
    printf("\n");

    // Imprime o mapa da sala de cinema
    for (int i = f - 1; i >= 0; i--) {
        printf("%c ", 'A' + i);
        for (int j = 0; j < l; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
