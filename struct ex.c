#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
};

int main()
{
    
    struct pessoa a1;
    
   strcpy(a1.nome, "Maria");
   a1.idade = 19;
   a1.altura = 1.55;
   
   printf("Nome é %s", a1.nome);
   printf("Idade é %d", a1.idade);
   printf("Altura é %f", a1.altura);

    return 0;
}
