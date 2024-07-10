int main()
{
    int numero,somatorio,resultado,a,b,c,d,e,f;


        scanf("%d", &numero);
        f =numero%10;
        e =numero/10%10;
        d =numero/100%10;
        c =numero/1000%10;
        b =numero/10000%10;
        a =numero/100000%10;

        
        somatorio = (2*f + 3*e +4*d + 5*c + 6*b +7*a);
        resultado = (11-somatorio%11);

    printf("%d\n",resultado);


return 0; 
}