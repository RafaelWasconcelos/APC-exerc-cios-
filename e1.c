#include <stdio.h>

int main()
{
    int CA,CE,CI,K,n1,n2,n3;

    scanf("%d%d%d",&n1,&n2,&n3);

    if ((n1>=n2)&&(n2>=n3))
    {
        CI = n1;
        CA = n2;
        CE = n3;  
    }
    else if ((n1>=n2)&&(n3>=n2))
    {
        CI = n1;
        CA = n3;
        CE = n2; 
    }

    if ((n2>=n3)&&(n3>=n1))
    {
        CI = n2;
        CA = n3;
        CE = n1;  
    }
    else if ((n2>=n3)&&(n1>=n3))
    {
        CI = n2;
        CA = n1;
        CE = n3; 
    }

    if ((n3>=n2)&&(n1>=n2))
    {
        CI = n3;
        CA = n1;
        CE = n2;  
    }
    else if ((n3>=n2)&&(n2>=n1))
    {
        CI = n3;
        CA = n2;
        CE = n1; 
    }

    K = (CA-CE)+CI;

    printf("%d",K);


    

    



  



    return 0;
}