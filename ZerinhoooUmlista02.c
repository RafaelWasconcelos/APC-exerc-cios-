#include <stdio.h>

int main()
{

        int A,B,C; 

        printf("Zerinho ou um?\n");
        scanf("%d", &A);
        printf("Zerinho ou um?\n");
        scanf("%d", &B);
        printf("Zerinho ou um?\n");
        scanf("%d", &C);

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
            printf("empate");



        return 0;

}
