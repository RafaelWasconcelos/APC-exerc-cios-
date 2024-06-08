#include <stdio.h>

int main()
{
    int T,n,primo = 0;
    scanf ("%d",&T);
    for (int i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            primo = 1;
        }
    }

    return 0;
}