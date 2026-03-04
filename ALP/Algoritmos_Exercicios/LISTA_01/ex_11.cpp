#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(0, "pt_BR.UTF-8");
    int numero, dobro, metade, quadrado, cubo;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    metade = numero / 2;
    quadrado = pow(numero, 2); // numero * numero;
    cubo = pow(numero, 3); // numero * numero * numero;

    printf("Número: %d\n", numero);
    printf("Dobro: %d\n", dobro);
    printf("Metade: %d\n", metade);
    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);
}