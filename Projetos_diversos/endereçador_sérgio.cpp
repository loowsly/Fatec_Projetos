/*
    Na aula de Algoritmos e Lógica de Programação, vimos sobre como varíaveis são alocadas na memória
    dito isso, tomei curiosidade para ir atrás de entender um pouco mais e decidi ler(e ver vídeos) sobre
    cheguei na conclusão de criar um "simulador" de alocação, onde o usuário aloca um número(inteiro apenas, não fui atrás de ver
    sobre float, double, string etc).
    anotações: 
            0x%p refere ao ponteiro de memória, o endereço
            void* guarda um endereço sem definir tipo, é genérico
            free 
            eu odeio ponteiro
            eu odeio linguagem verbosa
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    void* espaco_alocado[10];
    int qtd = 0;    /*
                    curiosamente, se aqui for maior que espaco_alocado, ele nao executa, pois o programa tenta acessar
                    um valor que não foi alocado, ou seja, sem permissão existente, causando o que chamam de segmentation fault,
                    https://pt.stackoverflow.com/questions/177185/o-que-%C3%A9-segmentation-fault <- uma bela explicação 
                    */
    
    printf("======== Visualizador de Endereços ========\n\n");
    printf("Digite um numero inteiro != 0\n");
    printf("(0 fecha tudo)\n");

    int valor = 1;
    while (valor != 0 && qtd < 10) {
        printf("\n===========================");
        printf("\nValor da nova variavel: ");
        scanf("%d", &valor);
        if (valor == 0) break;
        int* posicao = new int;
        /*
        aqui eu nao entendi muito bem, mas pelo jeito, no C++ é possivel criar um "ponteiro/varivael" ,tipo int*, que guarda 
        um endereço na ram, entao eu posso depois chamar esse endereço usando o mesmo "*" e dar um valor nele
        no geral:
        * é o ponteiro em c++, que declara uma variavel que guarda um endereço, nao um valor
        depois é possivel dar o valor a esse endereço
        "*" é o ponteiro/gps do c++ e tem 2 usos
        "&" é o que pega o endereço de uma variavel, e permite nós alterarmos ele, tipo com scanf
        */
        *posicao = valor;
        espaco_alocado[qtd] = posicao;
        printf("Endereçamento: 0x%p", posicao);
        qtd++;
    }

    printf("\n===== Listinha =====\n");
    for (int var_id = 0; var_id < qtd; var_id++) {
        printf("Variável: %d | Endereço: 0x%p | Dado: %d\n", var_id, espaco_alocado[var_id], *(int*)espaco_alocado[var_id]);
        // delete() irmao mais novo do free(), C++
        // free() é engraçado, e tbm velho, foi substituido junto com o malloc pelo new e delete
        /*
        frescura aqui, mas pra fins estudantis, um programa ao ser fechado, geralmente a ram é liberada
        mas isso acontece somente quando o sistema operacional finalmente percebe que foi fechado, e só entao libera a ram
        ou seja, usar free() é algo que seria bom antigamente,
        mas hoje em dia as próprias linguagens ja fazem isso automaticamente, em tese, e tambem existe o delete agora
        */
    }
}