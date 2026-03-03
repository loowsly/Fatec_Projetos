#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8"); //meu compilador nao entende "Portuguese"
    // dados
    float valorNovo, valorAntigo, taxa;

    //entrada de dados
    printf("Calculo do valor de um reajuste de um determinado valor\n\n");
    printf("Digite o valor antigo: ");
    scanf("%f", &valorAntigo);
    printf("Digite a taxa de reajuste(ex: 8%%): "); // % tem que ser duplo nesse trem
    scanf("%f", &taxa);

    // processamento de dados
    valorNovo = valorAntigo + (valorAntigo * (taxa / 100));

    //saida de dados
    printf("O valor antigo era de: %.2f \n", valorAntigo);
    printf("O novo valor é: %.2f \n", valorNovo);

} //fim