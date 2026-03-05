#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    const float INSS = 0.08;
    const float valorHora = 3;
    float   salarioBruto,
            salarioLiquido,
            valorDesconto, 
            horasTrabalhadas;
    printf("=============================================\n\n");
    printf("Calculo do salário líquido de um funcionário\n\n");
    printf("=============================================\n\n");
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    salarioBruto = horasTrabalhadas * valorHora;
    valorDesconto = salarioBruto * INSS;
    salarioLiquido = salarioBruto - valorDesconto;
    system("cls");
    printf("=============================================\n\n");
    printf("Salário bruto: R$ %.2f\n", salarioBruto);
    printf("Valor do desconto (INSS): R$ %.2f\n", valorDesconto);
    printf("Salário líquido: R$ %.2f\n\n", salarioLiquido);
    printf("=============================================\n");
    system("pause");
    


}