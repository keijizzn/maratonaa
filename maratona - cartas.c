#include <stdio.h>

char verificar_ordem(int cartas[]) {
    if (cartas[0] < cartas[1] && cartas[1] < cartas[2] && cartas[2] < cartas[3] && cartas[3] < cartas[4]) {
        return 'C';
    }
    else if (cartas[0] > cartas[1] && cartas[1] > cartas[2] && cartas[2] > cartas[3] && cartas[3] > cartas[4]) {
        return 'D';
    }
    else {
        return 'N';
    }
}

int main() {
    int cartas[5];
    printf("Digite as cinco cartas (valores distintos entre 1 e 13): ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cartas[i]);
    }

    char resultado = verificar_ordem(cartas);
    printf("Resultado: %c\n", resultado);

    return 0;
}