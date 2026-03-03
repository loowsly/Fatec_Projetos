programa {
    funcao inicio(){
        // controle de dados
        const real INSS = 0.08
        const real valorHora = 3
        real salarioBruto, salarioLiquido, valorDesconto, horasTrabalhadas

        // entrada de informações
        escreva("====Calcular o salário líquido de um funcionário====\n")
        escreva("\nDigite o número de horas trabalhadas no mês: ")
        leia(horasTrabalhadas)

        // processamento
        salarioBruto = horasTrabalhadas * valorHora
        valorDesconto = salarioBruto * INSS
        salarioLiquido = salarioBruto - valorDesconto

        // saída de informações 
        escreva("\n======================")
		escreva("\nResultado:")
		escreva("\nSalário Bruto: R$ ", salarioBruto)
		escreva("\nDesconto do INSS (8%): R$ ", valorDesconto)
		escreva("\nSalário Líquido: R$ ", salarioLiquido)
		escreva("\n======================")
    }
}