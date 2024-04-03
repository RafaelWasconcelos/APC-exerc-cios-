#include <stdio.h>

int main()
{

        int A,B,C; 
        char vencedor;

        scanf("%d%d%D", &A,&B,&C);

        if ((A==B) && (B!=C))
        {
            printf("C\n");
        }
        else if ((A==C) && (B!=C))
        {
            printf("B\n");
        }
        else if ((B==C) && (A!=B))
        {
            printf("A\n");
        }
        else
            printf("empate\n");



        return 0;

}
