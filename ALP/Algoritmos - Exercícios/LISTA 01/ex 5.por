//confesso, odiei portugol, ainda bem que é só para a lógica de programação

programa {
    funcao inicio() {
        // bibliotecas
        // por qual motivo eu sou obrigado a usar uma biblioteca para ter acesso a uma função de potencia?
        inclua biblioteca Matematica --> m

        // controle de dados
        const real Pi = 3.1415
        real raio, altura, geratriz, area

        // entrada de informaões
        escreva("====Calcular a área de um cone====\n")
        escreva("\nDigite o raio do cone: ")
        leia(raio)
        escreva("Digite a altura do cone: ")
        leia(altura)
        
        // processamento
        geratriz = raio * raio + altura * altura
        geratriz = m.potencia(geratriz, 0.5)
        area = Pi*raio*(raio+geratriz)

        // saída de informações
        escreva("\nA geratriz do cone é: ", m.arredondar(geratriz, 1))
        escreva("\nA área do cone é: ", m.arredondar(area, 1))
    }
}