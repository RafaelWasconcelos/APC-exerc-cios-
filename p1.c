#include <stdio.h>

int main()
{
    int j1, j2, e, s,k;
    char v1, v2, v3;

    for(k=0;k<3;k++)
    {
        scanf("%d%d%d",&e,&j1,&j2);
        if(k==0)
        {
            s=j1+j2;

            if(e==0)
            {
                if(s%2==0)
                {
                    v1='A';
                }
                else
                {
                    v1='B';
                }
            }

            if(e==1)
            {
                if(s%2!=0)
                {
                    v1='A';
                }
                else
                {
                    v1='B';
                }
            }
        }

        if(k==1)
        {
            s=j1+j2;

            if(e==0)
            {
                if(s%2==0)
                {
                    v2='C';
                }
                else
                {
                    v2='D';
                }
            }

            if(e==1)
            {
                if(s%2!=0)
                {
                    v2='C';
                }
                else
                {
                    v2='D';
                }
            }
        }

        if(k==2)
        {
            s=j1+j2;

            if(e==0)
            {
                if(s%2==0)
                {
                    v3=v1;
                }
                else
                {
                    v3=v2;
                }
            }

            if(e==1)
            {
                if(s%2!=0)
                {
                    v3=v1;
                }
                else
                {
                    v3=v2;
                }
            }
        }
    }

    printf("%c\n",v3);




    return 0;
}