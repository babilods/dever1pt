#include <stdio.h>

int main() {
    int numAlunos = 30;
    double notas[numAlunos];
    double somaNotas = 0.0;

    for (int i = 0; i < numAlunos; i++) {
        double n1, n2, n3;
      
        printf("Digite as tres notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        
        //Calcule a média ponderada
        double mediaPonderada = (n1 * 2 + n2 * 4 + n3 * 3) / 10;
        
        //Soma das médias para calcular a média geral
        somaNotas += mediaPonderada;
        
        // Imprime a média do aluno e a mensagem de "Aprovado" ou "Reprovado"
        printf("Media do aluno %d: %.2lf ", i + 1, mediaPonderada);
        if (mediaPonderada >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    //Média geral da turma
    double mediaGeral = somaNotas / numAlunos;
    
    //Imprimir a média geral da turma
    printf("Media Geral da Turma: %.2lf\n", mediaGeral);

    return 0;
}
