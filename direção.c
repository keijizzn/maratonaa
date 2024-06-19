#include <stdio.h>
#include <string.h>

typedef enum {
    NORTE,
    LESTE,
    SUL,
    OESTE
} Direcao;
int calcular_menor_angulo(const char *A, const char *B);

int main() {
    const char *A = "norte";
    const char *B = "leste";
    int resultado = calcular_menor_angulo(A, B);
    printf("Menor ângulo: %d graus\n", resultado);
    return 0;
}
int calcular_menor_angulo(const char *A, const char *B) {
    Direcao direcao_A, direcao_B;
    if (strcmp(A, "norte") == 0) {
        direcao_A = NORTE;
    } else if (strcmp(A, "leste") == 0) {
        direcao_A = LESTE;
    } else if (strcmp(A, "sul") == 0) {
        direcao_A = SUL;
    } else if (strcmp(A, "oeste") == 0) {
        direcao_A = OESTE;
    } else {
        return -1;
    }
    if (strcmp(B, "norte") == 0) {
        direcao_B = NORTE;
    } else if (strcmp(B, "leste") == 0) {
        direcao_B = LESTE;
    } else if (strcmp(B, "sul") == 0) {
        direcao_B = SUL;
    } else if (strcmp(B, "oeste") == 0) {
        direcao_B = OESTE;
    } else {
        return -1;
    }
    int angulos[] = {0, 90, 180, 270};
    int diferenca = (angulos[direcao_B] - angulos[direcao_A] + 360) % 360;
    return diferenca;
}
//tive dificuldade e consultei um exemplo dado em sala de aula no caderno
