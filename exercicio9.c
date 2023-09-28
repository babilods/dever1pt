#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosBranco = 0;
    int voto;

    while (1) {
        // Solicita ao usuário que insira o código do voto
        printf("Digite o codigo do voto: ");
        scanf("%d", &voto);

        //0 para encerrar a contagem
        if (voto == 0) {
            break;
        }

        // Verifica o código do voto e incrementa o contador correspondente
        switch (voto) {
            case 1:
                candidato1++;
                break;
            case 2:
                candidato2++;
                break;
            case 3:
                candidato3++;
                break;
            case 4:
                candidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            default:
                printf("Codigo invalido.\n");
        }
    }

    // Imprime os resultados
    printf("Total de votos para o Candidato 1: %d\n", candidato1);
    printf("Total de votos para o Candidato 2: %d\n", candidato2);
    printf("Total de votos para o Candidato 3: %d\n", candidato3);
    printf("Total de votos para o Candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", votosNulos);
    printf("Total de votos em branco: %d\n", votosBranco);

    return 0;
}
