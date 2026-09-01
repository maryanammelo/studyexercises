#include <stdlib.h>
#include <stdio.h>
//imprimir os numeros de n até 0 
void imprimir(int x){
    if(x == 0)
        printf("%d ", x);
    else{
        printf("%d ", x);
        imprimir(x - 1);
    }
}

int main()
{
    int n;
    
    printf("Digite um valor maior que zero:");
    scanf("%d", &n);

    return 0;
}
------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
//imprimir os numeros de 0 até n 
void imprimir(int x){
    if(x == 0)
        printf("%d ", x);
    else{
        imprimir(x - 1);
        printf("%d ", x);
        
    }
}

int main()
{
    int n;
    
    printf("Digite um valor maior que zero:");
    scanf("%d", &n);

    return 0;
}
--------------------------------------------------------------------------
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fatorial(int n){
    if(n == 0 || n == 1)
    return 1;
    else{
        return n * fatorial(n -1);
    }
    
}

int main()
{
    int n;    
    
   printf("Digite um numero para que seja retornado seu fatorial: ");
   scanf("%d", &n);
   
   printf("O fatorial de %d é %d.", n, fatorial(n));
   
    return 0;
}
