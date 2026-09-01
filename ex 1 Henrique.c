#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    int i;
    int total = 0;
    
    char frase[100];
    
    printf("Digite a frase: ");
    fgets(frase, 100, stdin);
    
    for(i = 0; i < strlen(frase); i++){
        total = total + 1;
        
    }
    printf("A quantidade de caracteres é de %d", total - 1);
    
    return 0;
}
