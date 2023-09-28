#include <stdio.h>
#include <string.h>

int main() {
    int numCidades = 200;
    int codigoCidade, numVeiculos, numAcidentes;
    char estado[3];
    char cidadeMaiorAcidentes[100], cidadeMenorAcidentes[100];
    int maiorAcidentes = 0, menorAcidentes = 99999;
    int somaVeiculos = 0, somaAcidentesRS = 0;
    int numCidadesRS = 0;
    
    for (int i = 0; i < numCidades; i++) {
        printf("Digite o codigo da cidade (ou -1 para encerrar): ");
        scanf("%d", &codigoCidade);

        if (codigoCidade == -1) {
            break;
        }

        printf("Digite o estado da cidade (RS, SC, PR, SP, RJ, ...): ");
        scanf("%s", estado);

        printf("Digite o numero de veiculos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);

        printf("Digite o numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &numAcidentes);

        somaVeiculos += numVeiculos;

        if (strcmp(estado, "RS") == 0) {
            somaAcidentesRS += numAcidentes;
            numCidadesRS++;
        }

        if (numAcidentes > maiorAcidentes) {
            maiorAcidentes = numAcidentes;
            strcpy(cidadeMaiorAcidentes, estado);
        }

        if (numAcidentes < menorAcidentes) {
            menorAcidentes = numAcidentes;
            strcpy(cidadeMenorAcidentes, estado);
        }
    }

    double mediaVeiculos = (double)somaVeiculos / numCidades;
    double mediaAcidentesRS = (double)somaAcidentesRS / numCidadesRS;

    printf("Maior indice de acidentes: %d (Cidade: %s)\n", maiorAcidentes, cidadeMaiorAcidentes);
    printf("Menor indice de acidentes: %d (Cidade: %s)\n", menorAcidentes, cidadeMenorAcidentes);
    printf("Media de veiculos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
    printf("Media de acidentes com vítimas no Rio Grande do Sul: %.2lf\n", mediaAcidentesRS);

    return 0;
}

