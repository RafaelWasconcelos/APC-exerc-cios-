#include <stdio.h>

int main()
{

        int A,B,C; 

        scanf("%d%d%d", &A,&B,&C);

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
