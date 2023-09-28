#include <stdio.h>
#include <math.h>

int main() {
    double x, resultado;

    //inserir o valor de x
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    //Ver se x é maior ou igual a 4 para não ter raiz negativa
    if (x >= 4) {
        resultado = (5 * x + 3) / sqrt(x * x - 16);
        printf("O valor de f(%.2lf) e: %.2lf\n", x, resultado);
    } else {
        printf("O valor de x deve ser maior ou igual a 4 para nao ter raiz negativa.\n");
    }

    return 0;
}
