#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    int i;
    int num2[10];
    
    srand(time(NULL));
    
    for(i = 0; i < 10; i++){
        num2[i] = rand();
    }

    printf("\n");
    for(i = 0; i < 10; i++){
        printf("%d ", num2[i]);
    }
    return 0;
}

----------------------------------------------------
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    int i;
    int num2[40];
    
    srand(time(NULL));
    
    for(i = 0; i < 40; i++){
        num2[i] = 1 + rand() % 99; // os numeros nao passarão de 100
    }

    printf("\n");
    for(i = 0; i < 40; i++){
        printf("%d ", num2[i]);
    }
    return 0;
}
