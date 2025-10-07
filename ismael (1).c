#include <stdio.h>
int main() {
    float t, c, d, i, total;
    printf("Introduzca cantidad de temporadas\n");
    printf("Introduzca cantidad de capitulos\n");
    printf("Introduzca la duracion del capitulo promedio\n");
    printf("Introduzca cantidad de duracion de intro\n");
    scanf("%f"),&t;
    scanf("%f"),&c;
    scanf("%f"),&d;
    scanf("%f"),&i;

    total=(t*c*(d-i))/60;
    printf("%.2f su total de datos es:\n",total);
    return 0;
}
