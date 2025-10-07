#include <stdio.h>
int main(){
    double bolivianos;
    double dolares;
    printf("Introduzca cantidad en dolares;");
    scanf("%lf",&dolares);
    bolivianos = dolares*6.96;
    printf("%lfdolares son %lf bolivianos.\n",dolares, bolivianos);
    return 0;
}
