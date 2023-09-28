#include <stdio.h>

int main() {
    int numHabitantes = 0;
    double salario, totalSalario = 0.0, mediaSalario;
    int numFilhos, totalFilhos = 0;
    double maiorSalario = 0.0;
    int numPessoasSalarioBaixo = 0;

    do {
        //Inserir o salário
        printf("Digite o salario do habitante: ");
        scanf("%lf", &salario);

        //Se for negativo encerra a entrada de dados
        if (salario < 0.0) {
            break;
        }

        //Insirir o número de filhos
        printf("Digite o numero de filhos do habitante: ");
        scanf("%d", &numFilhos);

        //Média do salário e o total de filhos
        totalSalario += salario;
        totalFilhos += numFilhos;
        numHabitantes++;

        // Verifica se o salário é até R$100,00
        if (salario <= 100.0) {
            numPessoasSalarioBaixo++;
        }

        // Verifica se é o maior salário até agora
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

    } while (1);

    // Calcula as médias
    mediaSalario = totalSalario / numHabitantes;
    double mediaFilhos = (double)totalFilhos / numHabitantes;
    double percentualSalarioBaixo = (double)numPessoasSalarioBaixo / numHabitantes * 100.0;

    // Imprime os resultados
    printf("Media do salario da populacao: %.2lf\n", mediaSalario);
    printf("Media do numero de filhos: %.2lf\n", mediaFilhos);
    printf("Maior salario: %.2lf\n", maiorSalario);
    printf("Percentual de pessoas com salario ate R$100,00: %.2lf%%\n", percentualSalarioBaixo);

    return 0;
}
