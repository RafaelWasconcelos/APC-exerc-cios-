int main ()
{
    int valor,valor2;
    char vencedor;

    
        
       scanf("%d%d",&valor,&valor2);


        if(valor==0)
        {
            if(valor2==1) 
            {
                vencedor='B';
            }
            else if(valor2==4)
            {
                vencedor= 'B';
            }
            else if ((valor2!=0))
            {
                vencedor ='A';
            }
        }

        if (valor==1)
        {
            if(valor2==2)
            {
                vencedor = 'B';
            }
            else if(valor2==3)
            {
                vencedor= 'B';
            }
            else if ((valor2!=1)) 
            {
                vencedor ='A';
            }   
        }

        if (valor==2)
        {
            if(valor2==0)
            {
                vencedor='B';
            }
            else if(valor2==4)
            {
                vencedor='B';
            }
            else if ((valor2!=2))
            {
                vencedor='A';
            }
        }

        if (valor==3)
        {
            if(valor2==0)
            {
                vencedor='B';
            }
            else if(valor2==2)
            {
                vencedor='B';
            }
            else if ((valor2!=3))
            {
                vencedor='A';
            }
        }

        if (valor==4)
        {
            if(valor2==1)
            {
                vencedor='B';
            }
            else if(valor2==3)
            {
                vencedor='B';
            }
            else if ((valor2!=4))
            {
                vencedor='A';
            }
        }
        if (valor==valor2)
        {
            printf("empate\n");
        }

    printf("%c",vencedor);
    

    return 0;
}