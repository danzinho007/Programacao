#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char nome[30];
    // char = variável que aceita caracteres da tabela ASC
    // [30] = tamanho máximo de caracteres que a variável 
    // vai aceitar
    printf("Digite o seu nome: "); 
    // gets(nome); = proibido em C moderno
    fgets(nome, 30, stdin);
    // gets = Pega o nome e guarda na variável nome
    system("cls");
    // Limpa a tela 
    printf("Bem vindo %s\n", nome);
    // %s = Avisa a memória que o tipo de caractere é um 
    // caractere
    // \n = pula uma linha
    printf("Pressione Enter para sair...");
    getchar();
    system("clear");
    printf("Fim");
    return 0; 
}