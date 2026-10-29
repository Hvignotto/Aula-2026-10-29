#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    double salario;
    char Genero;

    printf("Digite seu nome: ");
    scanf("%s", &nome); // Lê uma palavra (sem espaços)

    printf("Digite sua idade: ");
    scanf("%d", &idade); // Lê um número inteiro

    printf("Digite seu salario: ");
    scanf("%lf", &salario); // Lê um número double

    printf("Digite seu gênero ");
    scanf("%c[0], &Genero\n");
    
    printf("DADOS DIGITADOS:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Salario: R$ %.2f\n", salario);
    printf("Genero: %c\n");

    return 0;
}