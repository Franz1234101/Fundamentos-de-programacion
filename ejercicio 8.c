#include <stdio.h>
int main () {
    long N, original, invertido = 0;
    int digito;
    printf("Ingrese un numero entero: ");
    scanf("%d", &N);
    original = N;
    while (N > 0){
            digito = N % 10;
            invertido = invertido * 10 + digito;
            N = N / 10;
    }
    if (original == invertido)
        printf("El numero %ld es capicua.\n", original);
        else
            printf("El numero %ld NO es capicua.\n", original);
        return 0;
}
