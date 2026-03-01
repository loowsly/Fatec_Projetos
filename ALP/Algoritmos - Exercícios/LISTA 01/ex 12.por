programa {
    funcao inicio() {
        inclua biblioteca Matematica --> m // só pra arredondar, n gosto de quebrados
        // controle de dados
        real fahrenheit, celsius

        // entrada de informações
        escreva("====Calcular a temperatura em Celsius====\n")
        escreva("\nDigite a temperatura em Fahrenheit: ")
        leia(fahrenheit)

        // processamento
        celsius = (fahrenheit - 32)/(1.8)
        
        // saída de informações
        escreva("\nA temperatura em Celsius é: " + m.arredondar(celsius,1) + "°")
    }
}