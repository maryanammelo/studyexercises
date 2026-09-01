#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50], nome_completo[100];

    // Pedir o nome e sobrenome ao usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    // Concatenar nome e sobrenome
    strcpy(nome_completo, nome);  // Copia o nome para o nome_completo
    strcat(nome_completo, " ");   // Adiciona um espaço entre nome e sobrenome
    strcat(nome_completo, sobrenome);  // Concatena o sobrenome

    // Exibir o nome completo
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}
