/*Usando instruções if, operadores 2. relacionais e operadores de igualdade*/
#include <stdio.h>
int main() {
    int nmr1, nmr2;
    printf("Digite dois numeros inteiros");
    printf("e te direi o relacionamento entre eles\n");
    
    scanf("%d %d", &nmr1, &nmr2 );
        if (nmr1==nmr2)
            printf("%d e %d sao iguais\n", nmr1, nmr2);
        if (nmr1!=nmr2)
            printf("%d e %d sao diferentes\n", nmr1, nmr2);
        if (nmr1>nmr2)
            printf("%d e maior que %d\n", nmr1, nmr2);
        if (nmr1<nmr2)
            printf("%d e menor que %d\n", nmr1, nmr2);
        if (nmr1>=nmr2)
            printf("%d e maior ou igual a %d\n", nmr1, nmr2);
        if (nmr1<=nmr2)
            printf("%d e menor ou igual a %d\n", nmr1, nmr2);
        else
            printf("%d e %d sao diferentes\n", nmr1, nmr2);
    return 0;
}