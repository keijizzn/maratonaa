#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);
    int soma = 0; 
    int ultimo_numero = 0;

    for (int i = 0; i < N; ++i) {
        int numero;
        scanf("%d", &numero);

        if (numero == 0) {
            soma -= ultimo_numero;
        } else {
            soma += numero;
            ultimo_numero = numero;
        }
    }
    printf("%d\n", soma);
    return 0;
}
// nao consegui este