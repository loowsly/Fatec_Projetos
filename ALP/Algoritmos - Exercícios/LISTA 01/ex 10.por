programa{
    funcao inicio(){
        // controle de dados
        real reajuste, valorNovo, valorAtual, taxa

        // entrada de informações
        escreva("====Calcular o valor reajustado de um produto====\n")
        escreva("\nDigite o valor antigo do produto: ")
        leia(valorAtual)
        escreva("Digite a taxa de reajuste: ")
        leia(taxa)

        // processamento
        valorNovo = valorAtual*(1 + (taxa/100)) //nao precisava desse parenteses, mas fica mais claro
        reajuste = valorNovo - valorAtual

        // saída de informações
        escreva("\nO valor reajustado é: ", valorNovo)
        escreva("\nO valor do reajuste é: ", reajuste)
        escreva("\nO valor antigo do produto era: ", valorAtual)
    }
}