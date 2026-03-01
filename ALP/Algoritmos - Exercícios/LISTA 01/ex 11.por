programa {
    funcao inicio() {
        inclua biblioteca Matematica --> m
        // controle de dados
        inteiro numero // leia um numero inteiro, mas o resultado pode ser um número real
        real dobro, metade, quad, cubo

        // entrada de informações
        escreva("====Calcular informações de um número inteiro====\n")
        escreva("\nDigite um número inteiro: ")
        leia(numero)

        // processamento
        dobro = numero * 2
        metade = numero / 2
        quad = m.potencia(numero, 2)
        cubo = m.potencia(numero, 3)

        // saída de informações
        escreva("\nO dobro do número é: ", dobro)
        escreva("\nA metade do número é: ", metade)
        escreva("\nO quadrado do número é: ", quad)
        escreva("\nO cubo do número é: ", cubo)
    }
}