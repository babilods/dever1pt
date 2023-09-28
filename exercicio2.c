#include <stdio.h>

int main() {
    double alturaChico = 150.0; 
    double alturaZe = 110.0;
    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += 2.0; 
        alturaZe += 3.0;   
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);

    return 0;
}
