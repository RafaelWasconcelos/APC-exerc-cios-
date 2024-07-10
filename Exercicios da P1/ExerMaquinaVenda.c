#include <stdio.h>

int main()
{
    int p,v,troco,suporte;  /* P = preço */
    int i500, i100, i50, i10, i05, i01;

    i500=0;
    i100=0;
    i50=0;
    i10=0;
    i05=0;
    i01=0;

    do
    {
        scanf("%d", &p);
        scanf("%d", &v);

        troco= v-p;
        suporte= troco;

    } while((v<p)||(v<0)||(v>100000)||(p<0)||(p>100000));

        while(suporte>=500)
        {
            suporte = (suporte - 500);
            i500++;
        }

        while (suporte >= 100)
        {
            suporte = (suporte-100);
            i100++;
        }
        
        while (suporte >= 50)
        {
            suporte = (suporte-50);
            i50++;
        }

        while (suporte >= 10)
        {
            suporte = (suporte- 10);
            i10++;
        }

        while (suporte >= 05)
        {
            suporte = (suporte - 05);
            i05++;
        }

        while (suporte >= 01)
        {
            suporte = (suporte - 01);
            i01++;
        }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n", i500, i100, i50, i10, i05, i01);

return 0;
}






    