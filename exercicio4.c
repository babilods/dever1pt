#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    // Verifica se formam um triângulo
    if (A + B > C && A + C > B && B + C > A) {
    
     //Quadrado dos lados
        double quadradoA = A * A;
        double quadradoB = B * B;
        double quadradoC = C * C;

        // Compara os quadrados para determinar os ângulos
        if (quadradoA == quadradoB + quadradoC || quadradoB == quadradoA + quadradoC || quadradoC == quadradoA + quadradoB) {
            printf("Triangulo retangulo.\n");
        } else if (quadradoA > quadradoB + quadradoC || quadradoB > quadradoA + quadradoC || quadradoC > quadradoA + quadradoB) {
            printf("Triangulo obtusangulo.\n");
        } else {
            printf("Triangulo acutangulo.\n");
        }
    } else {
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}
