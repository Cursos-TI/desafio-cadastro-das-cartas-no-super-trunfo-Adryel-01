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

    int inicio, verCarta, primeiroAtributo, segundoAtributo, resultado1, resultado2;
    float soma, soma02;

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
        case 1: // ver carta 1

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

        case 2: // ver carta 2

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
        break;
        }
    break;
    

// Aqui voltamos para o Menu01 com a opção "Jogar".

    case 2: //Opção Jogar

        printf("\nSelecione dois atributos diferentes para Jogar!\n");
        printf("\n1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("\nSelecione o 1º Atributo: ");
        scanf(" %d", &primeiroAtributo);

        printf("\nAgora selecione o 2º atributo!\n");
        printf("\n1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade demográfica\n");
        printf("\nSelecione o 2º Atributo: ");
        scanf(" %d", &segundoAtributo);

        switch (primeiroAtributo)
        {
        case 1: //Atributo População
                
            printf("\n%s vs %s\n", estado, estado02);
            printf("\nVocê escolheu o atributo: População\n");
            printf("População de %s = %u Habitantes  |  População de %s = %d Habitantes \n", estado, populacao, estado02, populacao02);
        
            if (populacao == populacao02)
            {
                resultado1 == 0; //0 se os resultados das variáveis forem iguais
            }else{
                resultado1 = populacao > populacao02 ? 1 : 2;
            }

        break;
        case 2: //Atributo Área
                
            printf("\n%s vs %s\n", estado, estado02);
            printf("\nVocê escolheu o atributo: Área\n");
            printf("Área de %s = %.2f Km²  |  Área de %s = %.2f Km² \n", estado, area, estado02, area02);
             
            if (area == area02)
            {
                resultado1 == 0; //0 se os resultados das variáveis forem iguais.
            }else{
                resultado1 = area > area02 ? 1 : 2;
        break;
        case 3: //Atributo PIB
                
            printf("\n%s vs %s\n", estado, estado02);
            printf("\nVocê escolheu o atributo: PIB\n");
            printf("PIB de %s = R$ %.2f Bilhões  |  PIB de %s = R$ %.2f Bilhões \n", estado, pib, estado02, pib02);
             
            if (pib == pib02)
            {
                resultado1 == 0; //0 se os resultados das variáveis forem iguais.
            }else{
                resultado1 = pib > pib02 ? 1 : 2;
        break;
        case 4: //Atributo Pontos Turísticos
                
            printf("\n%s vs %s\n", estado, estado02);
            printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
            printf("Pontos Turísticos de %s = %d |  PIB de %s = %d \n", estado, pontosturisticos, estado02, pontosturisticos02);

            if (pontosturisticos == pontosturisticos02)
            {
                resultado1 == 0; //0 se os resultados das variáveis forem iguais.
            }else{
                resultado1 = pontosturisticos > pontosturisticos02 ? 1 : 2;
        break;
        case 5: //Atributo Densidade demográfica
                
            printf("\n%s vs %s\n", estado, estado02);
            printf("\nVocê escolheu o atributo: Densidade Demográfica\n");
            printf("Densidade Populacional de %s = %.2f hab/Km²  |  Densidade Populacional de %s = %.2f hab/Km²\n", estado, densPopulacionalInv, estado02, densPopulacionalInv2);
             
            if (densPopulacionalInv == densPopulacionalInv2)
            {
                resultado1 == 0; //0 se os resultados das variáveis forem iguais.
            }else{
                resultado1 = densPopulacionalInv > densPopulacionalInv2 ? 1 : 2;
        break;
        default:
                printf("\nOpção Inválida!\n");
        break;
        }}}

        if (primeiroAtributo == segundoAtributo)
            {
                printf("\nEscolha um atributo diferente!\n");

            } else {

                switch (segundoAtributo)
                {
                case 1: //Atributo População
                
                printf("\nVocê escolheu o atributo: População\n");
                printf("População de %s = %u Habitantes  |  População de %s = %u Habitantes\n", estado, populacao, estado02, populacao02);
            
                if (populacao == populacao02)
                {
                    resultado2 == 0; //0 se os resultados das variáveis forem iguais
                }else {
                    resultado2 = populacao > populacao02 ? 1 : 2;
                }
            break;
            case 2: //Atributo Área
                    
                printf("\nVocê escolheu o atributo: Área\n");
                printf("Área de %s = %.2f Km²  |  Área de %s = %.2f Km² \n", estado, area, estado02, area02);
                

                if (area == area02)
                {
                    resultado2 == 0; //0 se os resultados das variáveis forem iguais.
                }else{
                    resultado2 = area > area02 ? 1 : 2;


            break;
            case 3: //Atributo PIB
                    
                printf("\nVocê escolheu o atributo: PIB\n");
                printf("PIB de %s = R$ %.2f Bilhões  |  PIB de %s = R$ %.2f Bilhões \n", estado, pib, estado02, pib02);
                
                if (pib == pib02)
                {
                    resultado2 == 0; //0 se os resultados das variáveis forem iguais
                }else {
                    resultado2 = pib > pib02 ? 1 : 2;
                }
            break;
            case 4: //Atributo Pontos Turísticos
                    
                printf("\nVocê escolheu o atributo: Pontos Turísticos\n");
                printf("Pontos Turísticos de %s = %d |  PIB de %s = %d \n", estado, pontosturisticos, estado02, pontosturisticos02);

                if (pontosturisticos == pontosturisticos02)
                {
                    resultado2 == 0; //0 se os resultados das variáveis forem iguais
                }else {
                    resultado2 = pontosturisticos > pontosturisticos02 ? 1 : 2;
                }
            break;
            case 5: //Atributo Densidade demográfica
                    
                printf("\nVocê escolheu o atributo: Densidade Demográfica\n");
                printf("Densidade Populacional de %s = %.2f hab/Km²  |  Densidade Populacional de %s = %.2f hab/Km²\n", estado, densPopulacionalInv, estado02, densPopulacionalInv2);
                
                if (densPopulacionalInv == densPopulacionalInv2)
                {
                    resultado2 == 0; //0 se os resultados das variáveis forem iguais
                }else {
                    resultado2 = densPopulacionalInv > densPopulacionalInv2 ? 1 : 2;
                }
                break;
                default:
                        printf("\nOpção Inválida!\n");
                break;
                }}}
            
                    if ((resultado1 == 1 & resultado2 == 1) || 
                        (resultado1 == 1 & resultado2 == 0) ||
                        (resultado1 == 0 & resultado2 == 1))
                    {

                        printf("\n>>> Parabéns %s, você venceu!\n", estado);
             
                    } else if ( (resultado1 == 2 & resultado2 == 2) || 
                                (resultado1 == 2 & resultado2 == 0) ||
                                (resultado1 == 0 & resultado2 == 2))
                    {
                        printf("\n>>> Parabéns %s, você venceu!\n", estado02);
                        
                    } else {
                        printf("\n>>> O jogo empatou! <<<\n");
                    }
 
                
        return 0;
    }
