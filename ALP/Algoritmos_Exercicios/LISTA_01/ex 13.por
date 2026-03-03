programa {
    funcao inicio() {
        // bibliotecas
        inclua biblioteca Matematica --> m // só pra arredondar, n gosto de quebrados

        // controle de dados
        real cotacao, valorDolar, valorReal

        // entrada de informações
        escreva("====Ler cotação do dólar e converter real para dolar====\n")
        escreva("\nDigite a cotação do dólar: ")
        leia(cotacao)
        escreva("Digite o valor em reais: ")
        leia(valorReal)

        // processamento
        valorDolar = valorReal / cotacao

        // saída de informações
        escreva("\nO valor em dólares é: " + m.arredondar(valorDolar,2))
    }
}