#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float fahrenheit, celsius;
    printf("==== Calcular a temperatura em Celsius ====\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit-32)/(1.8);
    printf("Temperatura em Celsius: %.2f\n", celsius);
}