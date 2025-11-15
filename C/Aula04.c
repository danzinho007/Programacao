#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int idade;
    // int = Variável de inteiro
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    // scanf verifica o que foi digitado no teclado
    // %d se refere a variável idade
    printf("Idade: %d", idade);
    // %d mostra o conteúdo da variável idade
    // Estrutura de decisão
    if (idade<18)
    {
        printf("\nMenor de idade\n");
    }
    if (idade>=18)
    {
        printf("\nMaior de idade\n");
    }
    return 0;
}