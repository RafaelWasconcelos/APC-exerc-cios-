int main ()
{
    int valor,valor2;
    char vencedor;

    scanf("%d%d",&valor,&valor2);
    
    do 
    {

        if(valor==0)
        {
            if(valor2==1) 
            {
                vencedor='B';
            }
            if(valor2==4)
            {
                vencedor= 'B';
            }
            if ((valor2!=1)&&(valor2!=4)&&(valor2!=0))
            {
                vencedor ='A';
            }

            else if (valor==1)
            {
                if(valor2==2)
                {
                    vencedor = 'B';
                }
                if(valor2==3)
                {
                    vencedor= 'B';
                }
                if ((valor2!=2) && (valor2!=3) && (valor2!=1)) 
                {
                    vencedor ='A';
                }   
            }

            else if (valor==2)
            {
                if(valor2==0)
                {
                    vencedor='B';
                }
                if(valor2==4)
                {
                    vencedor='B';
                }
                if ((valor2!=0)&&(valor2!=4)&&(valor2!=2))
                {
                    vencedor='A';
                }
            }

            else if (valor==3)
            {
                if(valor2==0)
                {
                    vencedor='B';
                }
                if(valor2==2)
                {
                    vencedor='B';
                }
                if ((valor2!=0)&&(valor2!=2)&&(valor2!=3))
                {
                    vencedor='A';
                }
            }

            else if (valor==4)
            {
                if(valor==1)
                {
                    vencedor='A';
                }
                if(valor==3)
                {
                    vencedor='A';
                }
                if ((valor2!=1)&&(valor2!=3)&&(valor2!=4))
                {
                    vencedor='B';
                }
            }
            else 
            {
                printf("empate");
            }
        
    }
    while ((valor<0)||(valor>4)||(valor2<0)||(valor2>4));

    printf("%c",vencedor);
    

    




    return 0;
}