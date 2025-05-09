#include <stdio.h>

int main() {

/* Adicionei as variáveis que utilizaremos, onde "letra" é a que representará o Estado, 
    "codigo" é o código da carta (Ex.: A01,B03,C04), "cidade" o nome da cidade, "estado" o nome do estado e assim por diante.
    */

        char codigo [10], cidade [20], estado [20], sigla01 [10];
        int pontosturisticos;
        float area, pib, dens_populacional, pib_per_capita;
        unsigned int populacao;

        printf("Super Trunfo - Países \n");
       
// Adicionei uma pequena descrição para introduzir.

        printf("\nVocê precisa cadastrar suas cartas para iniciar o jogo. Escolha 2 Estados para criar suas cartas. \n");

// Coloquei esse campo aqui para o usuário já colocar o nome do estado, separado dos demais atributos.
    
        printf("\nEstado 01: ");
        scanf("%s", &estado);

        printf("\nAdicione os atributos a sua carta!\n");
        
//Aqui inicia os campos para o usuário digitar os atributos que se pede da carta.
/*
        printf("\nDefina a sigla que representa o seu estado: ");
        scanf(" %s", &sigla01);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade);

//Nesse campo da população, poderia colocar um float ao invés de um int, pois o usuário pode escrever um número com decimal.
//Não alterei, pois segui a descrição do Desafio.
*/    
        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %u", &populacao);
    
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area);
        /*
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib);
    */
// Coloquei a operação de divisão para a densidade populacional e PIB per capita.

    dens_populacional = (float) (populacao / area);
    pib_per_capita = (float) (pib / populacao);

// Cálculo do Super Poder. Criei a variável densPopulacionalInv para armazenar a inversão dela.

    float superPoder, densPopulacionalInv;

    densPopulacionalInv = (float) (1 / dens_populacional);
    superPoder = (float) (populacao + area + pib + pontosturisticos + pib_per_capita + densPopulacionalInv);  

    printf("\nParabéns, você acabou de criar sua primeira carta! \n");

/* Adicionei as variáveis que utilizaremos na carta 2, onde "letra02" é a que representará o Estado da segunda carta, 
    "codigo02" é o código da carta (Ex.: A01,B03,C04), "cidade02" o nome da cidade, "estado02" o nome do estado e assim por diante.

Coloquei o 02 para não dá erro de compilação e puxar os valores da carta 01.
*/

        char codigo02 [10], cidade02 [20], estado02 [20], sigla02 [10];
        int pontosturisticos02;
        float area02, pib02, dens_populacional2, pib_per_capita2;
        unsigned int populacao02;

// Adicionei uma pequena descrição para introduzir.

        printf("\nAgora, vamos criar a sua segunda carta! Escolha o nome do Estado:\n");
     
// Coloquei esse campo aqui para o usuário já colocar o nome do estado, separado dos demais atributos.

        printf("\nEstado 02: ");
        scanf(" %s", estado02);

        printf("\nAdicione os atributos a sua carta!\n");

//Aqui inicia os campos para o usuário digitar os atributos que se pede da carta.
/*
      printf("\nDefina a sigla que representa o seu estado: ");
        scanf(" %s", &sigla02);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo02);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade02);

//Nesse campo da população, poderia colocar um float ao invés de um int, como comentei na linha 37.
//Não alterei, pois segui a descrição do Desafio.
*/
        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %u", &populacao02);
        
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area02);
        /*
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos02);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib02);
        */
// Coloquei a operação de divisão para a densidade populacional e PIB per capita.

    dens_populacional2 = (float) (populacao02 / area02);
    pib_per_capita2 = (float) (pib02 / populacao02);

// Cálculo do Super Poder. Criei a variável densPopulacionalInv para armazenar a inversão dela.

    float superPoder2, densPopulacionalInv2;

    densPopulacionalInv2 = (float) (1 / dens_populacional2);
    superPoder2 = (float) (populacao02 + area02 + pib02 + pontosturisticos02 + pib_per_capita2 + densPopulacionalInv2); 

       printf("\nVocê acabou de criar sua segunda carta!\n");
       printf("\n<<< Início do Jogo >>>\n");

// Criei um menu interativo para que o jogador decida se quer visualizar os dados das cartas cadastradas, ou se já prefere jogar

    int inicio, verCarta, primeiroAtributo;

    printf("\nVocê pode ver as cartas ou jogar!\n");
    printf("\n1. Ver Cartas\n");
    printf("2. Jogar\n");
    printf("\nEscolha uma opção: ");
    scanf("%d", &inicio);

// Aqui tem um menu switch relacionado a opção "Ver cartas" ou "Jogar. (Denominei o nome dele "Menu01")"

    switch (inicio)
    {
    case 1:

// Nesse case 1, eu adicionei um outro menu para o jogador conseguir escolher qual carta visualizar, se a 01 ou a 02.(Menu02)

        printf("\nVer Cartas\n");
        printf("\nQual carta você desejar ver?\n");
        printf("\n1. Carta 01\n");
        printf("2. Carta 02\n");
        printf("\nEscolha uma opção: ");
        scanf(" %d", &verCarta);

        switch (verCarta)
        {
        case 1:

            printf("\nCarta 01: %s\n", estado);
            printf("\nSigla: %s\n", sigla01);
            printf("Código: %s\n", codigo);
            printf("Cidade: %s\n", cidade);
            printf("População: %u Habitantes\n", populacao);
            printf("Área: %.2f Km²\n", area);
            printf("Pontos Turísticos: %d\n", pontosturisticos);
            printf("PIB: %.2f Bilhões de Reais\n", pib);
            printf("Densidade Populacional: %.2f hab/Km²\n", dens_populacional);
            printf("PIB Per capita: %.2f Reais\n", pib_per_capita);
            printf("Super Poder: %.3f \n", superPoder);
        break;

        case 2:

            printf("\nCarta 02: %s\n", estado02);
            printf("\nSigla: %s\n", sigla02);
            printf("Código: %s\n", codigo02);
            printf("Cidade: %s\n", cidade02);
            printf("População: %u Habitantes\n", populacao02);
            printf("Área: %.2f Km²\n", area02);
            printf("Pontos Turísticos: %d\n", pontosturisticos02);
            printf("PIB: %.2f Bilhões de Reais\n", pib02);
            printf("Densidade Populacional: %.2f hab/Km²\n", dens_populacional2);
            printf("PIB per capita: %.2f Reais\n", pib_per_capita2);
            printf("Super Poder: %.2f\n", superPoder2);
        break;

        default:
            printf("\nOpção Inválida!\n");
        }

// Aqui voltamos para o Menu01 com a opção "Jogar".

    case 2:

        printf("\nSelecione dois atributos diferentes para Jogar!\n");
        printf("\n1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("\nSelecione o 1º Atributo: ");
        scanf(" %d", &primeiroAtributo);

// Aqui está o menu 03 utilizado para realizar as comparações e a finalidade do jogo.

        int segundoAtributo1, resultado;

        switch (primeiroAtributo)
        {
        case 1: //Atributo População
            
            printf("\nVocê escolheu o atributo - População!\n");
            printf("\nSelecione o 2º Atributo");
            printf("\n1. Área\n");
            printf("2. PIB\n");
            printf("3. Pontos turísticos\n");
            printf("4. Densidade demográfica\n");
            printf("\nSelecione o 2º Atributo: ");
            scanf(" %d", &segundoAtributo1);

            switch (segundoAtributo1)
            {
            case 1: // Opção de escolha para atributo 1: População e Atributo 2: Área
                
                    printf("\n%s vs %s \n", estado, estado02);
                    printf("\nAtributos: População e Área\n");
                    printf("População de %s = %u Habitantes  |  Área de %s = %.2f Km² \n", estado, populacao, estado, area);
                    printf("População de %s = %u Habitantes  |  Área de %s = %.2f Km² \n", estado02, populacao02, estado02, area02);

                    float soma, soma01;
                    int resultado;

                    soma = (float) populacao + area;
                    soma01 = (float) populacao02 + area02;

                    printf("\nPoder de %s: %.2f  |  Poder de %s: %.2f\n", estado, soma, estado02, soma01);

                    
        
            break;
            
            default:
                break;
            }

//Comparação das cartas por atributos utilizando a função if.

            if (resultado = 1)
            {
                printf("\n>>> %s Venceu a partida <<<\n", estado);

            } else if () 
            {
                printf("\nParabéns, %s Ganhou!\n", estado);

            } else {

                printf("\nParabéns, %s Ganhou!\n", estado02);
            }
        break;
        case 2: //Atributo Área
            
            printf("\n%s vs %s - Área\n", estado, estado02);
            printf("\nCarta 01: %s - %.2f Km²\n", estado, area);
            printf("Carta 02: %s - %.2f Km²\n", estado02, area02);

            if  (area == area02)
            {
                printf("\n### O jogo deu empate ###!\n");

            } else if (area > area02)
            {
                printf("\nParabéns, %s Ganhou!\n", estado);

            } else {
            
                printf("\nParabéns, %s Ganhou!\n", estado02);
            }
        break;
        case 3: //Atributo PIB
            
            printf("\n %s vs %s - PIB\n", estado, estado02);
            printf("\nCarta 01: %s - %.2f Bilhões de Reais\n", estado, pib);
            printf("Carta 02: %s - %.2f Bilhões de Reais\n", estado02, pib02);

            if (pib == pib02) 
            {
                printf("\n### O jogo deu empate ###!\n");

            } else if (pib > pib02)
            {
                printf("\nParabéns, %s Ganhou!\n", estado);

            } else {
            
                printf("\nParabéns, %s Ganhou!\n", estado02);
            }
        break;
        case 4: //Atributo Pontos Turísticos
            
            printf("\n %s vs %s - Pontos Turísticos\n", estado, estado02);
            printf("\nCarta 01: %s - %d\n", estado, pontosturisticos);
            printf("Carta 02: %s - %d\n", estado02, pontosturisticos02);

            if (pontosturisticos == pontosturisticos02)
            {
                printf("\n### O jogo deu empate ###!\n");

            } else if (pontosturisticos > pontosturisticos02)
            {
                printf("\nParabéns, %s Ganhou!\n", estado);

            } else {
            
                printf("\nParabéns, %s Ganhou!\n", estado02);
            }
        break;
        case 5: //Atributo Densidade
            
            printf("\n %s vs %s - Densidade demográfica\n", estado, estado02);
            printf("\nCarta 01: %s - %.2f hab/Km²\n", estado, densPopulacionalInv);
            printf("Carta 02: %s - %.2f hab/Km²\n", estado02, densPopulacionalInv2);

            if (densPopulacionalInv == densPopulacionalInv2)
            {
                printf("\n### O jogo deu empate ###!\n");

            } else if (densPopulacionalInv > densPopulacionalInv2)
            {
                printf("\nParabéns, %s Ganhou!\n", estado);

            } else {
            
                printf("\nParabéns, %s Ganhou!\n", estado02);
            }
        break;

        default:
            printf("\nOpção Inválida\n");
        }

    }

    return 0;
}