#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float cotacaoDolar, valorReais, valorDolar;

    printf("=============================================\n\n");
    printf("Conversor de Dólar para Real com cotação atual\n\n");
    printf("=============================================\n\n");

    printf("Digite a cotação atual do dólar: ");
    scanf("%f", &cotacaoDolar);
    printf("Digite o valor em dólares que deseja converter: ");
    scanf("%f", &valorDolar);
    
    valorReais = valorDolar * cotacaoDolar;
    printf("O valor em reais é: R$ %.2f\n", valorReais);
}