#include <stdio.h>

int main() {
    double A, B, C;

    //inserir os valores
    printf("Digite o valor de A: ");
    scanf("%lf", &A);
    printf("Digite o valor de B: ");
    scanf("%lf", &B);
    printf("Digite o valor de C: ");
    scanf("%lf", &C);

    //Verifica se podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("E um triangulo equilatero.\n");
        } else if (A == B || A == C || B == C) {
            printf("E um triangulo isosceles.\n");
        } else {
            printf("E um triangulo escaleno.\n");
        }
    } else {
        printf("Os valores nao podem formar um triangulo.\n");
    }

    return 0;
}
