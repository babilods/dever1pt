#include <stdio.h>

int main() {
    double x, y;

    //Inserir os pontos
    printf("Digite as coordenadas do ponto (x y): ");
    scanf("%lf %lf", &x, &y);

    if (x > 0.0 && y > 0.0) {
        printf("Q1\n"); // 1 quadrante
    } else if (x < 0.0 && y > 0.0) {
        printf("Q2\n"); // 2 quadrante
    } else if (x < 0.0 && y < 0.0) {
        printf("Q3\n"); // 3 quadrante
    } else if (x > 0.0 && y < 0.0) {
        printf("Q4\n"); // 4 quadrante
    } else {
        if (x == 0.0 && y != 0.0) {
            printf("Eixo Y\n"); // Sobre eixo Y
        } else if (x != 0.0 && y == 0.0) {
            printf("Eixo X\n"); // Sobre eixo X
        } else {
            printf("Origem\n"); // (0,0)
        }
    }

    return 0;
}
