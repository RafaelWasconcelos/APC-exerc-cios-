#include <stdio.h>

int main()
{
    int A,B;
    char v;

    scanf("%d%d",&A,&B);

    if(A==0)
    {
        if(B==0)
        {
            printf("empate");
        }
        else if ((B==1)||(B==4))
        {
            v= 'B';
            printf("%c\n",v);
        }
        else 
        {
            v ='A';
            printf("%c\n",v);
        }
    }

    if(A==1)
    {
        if(B==1)
        {
            printf("empate\n");
        }
        else if ((B==2)||(B==3))
        {
            v= 'B';
            printf("%c\n",v);
        }
        else 
        {
            v ='A';
            printf("%c\n",v);
        }
    }

     if(A==2)
    {
        if(B==2)
        {
            printf("empate\n");
        }
        else if ((B==0)||(B==4))
        {
            v= 'B';
            printf("%c\n",v);
        }
        else 
        {
            v ='A';
            printf("%c\n",v);
            
        }
    }

     if(A==3)
    {
        if(B==3)
        {
            printf("empate\n");
        }
        else if ((B==0)||(B==2))
        {
            v= 'B';
             printf("%c\n",v);
        }
        else 
        {
            v ='A';
             printf("%c\n",v);
        }
    }

    if(A==4)
    {
        if(B==4)
        {
            printf("empate\n");
        }
        else if ((B==1)||(B==3))
        {
            v= 'B';
            printf("%c\n",v);
        }
        else 
        {
            v ='A';
             printf("%c\n",v);
        }

    }

    




return 0;



}