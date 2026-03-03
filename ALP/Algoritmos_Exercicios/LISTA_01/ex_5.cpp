#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const float Pi = acos(-1);
    float raio, area, geratriz, altura;

    printf("Calculo da área lateral de um cone\n");
    printf("Digite o valor do raio da base do cone: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura do cone: ");
    scanf("%f", &altura);
    geratriz = sqrt(pow(raio, 2) + pow(altura, 2));
    area = Pi * raio * geratriz;
    printf("A área lateral do cone é: %.2f u.a\n", area);
}