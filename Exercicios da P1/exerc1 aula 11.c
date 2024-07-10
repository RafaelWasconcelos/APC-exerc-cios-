int main(int argc, char const *argv[])
{
    char sexo;
    int idade;
    float altura, peso;

    printf("Digite o sexo do Usuário (M- Masculino F- Feminino), idade, altura e peso \n "); 
    scanf ("%c%d%f%f",&sexo,&idade,&altura,&peso);
    printf ("\n sexo: %c \n idade: %d \n altura: %.2f \n peso: %.2f", sexo, idade, altura, peso );
}
