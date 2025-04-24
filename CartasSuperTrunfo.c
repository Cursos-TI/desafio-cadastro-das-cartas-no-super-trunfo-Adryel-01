#include <stdio.h>

int main() {

    /* Adicionei as variáveis que utilizaremos, onde "letra" é a que representará o Estado, 
    "codigo" é o código da carta (Ex.: A01,B03,C04), "cidade" o nome da cidade, "estado" o nome do estado e assim por diante.
    */

    char letra;
    char codigo [10], cidade [20], estado [20];
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

        printf("\nEscolha uma letra de A a H para representar o seu estado: ");
        scanf(" %c", &letra);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade);

    //Nesse campo da população, poderia colocar um float ao invés de um int, pois o usuário pode escrever um número com decimal.
    //Não alterei, pois segui a descrição do Desafio.

        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %u", &populacao);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib);

    // Coloquei a operação de divisão para a densidade populacional e PIB per capita.

    dens_populacional = (float) (populacao / area);
    pib_per_capita = (float) (pib / populacao);

    // Cálculo do Super Poder. Criei a variável densPopulacionalInv para armazenar a inversão dela.

    float superPoder, densPopulacionalInv;

    densPopulacionalInv = (float) (1 / dens_populacional);
    superPoder = (float) (populacao + area + pib + pontosturisticos + pib_per_capita + densPopulacionalInv);  

    //Descrição básica para mostrar os dados de saída da carta 01

        printf("\nParabéns, você acabou de criar sua primeira carta! \n");

        printf("\nCarta 01: %s\n", estado);
        printf("\nEstado: %c\n", letra);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %u Habitantes\n", populacao);
        printf("Área: %.2f Km²\n", area);
        printf("Pontos Turísticos: %d\n", pontosturisticos);
        printf("PIB: %.2f Bilhões de Reais\n", pib);
        printf("Densidade Populacional: %.2f hab/Km²\n", dens_populacional);
        printf("PIB Per capita: %.2f Reais\n", pib_per_capita);
        printf("Super Poder: %.3f \n", superPoder);

    /* Adicionei as variáveis que utilizaremos na carta 2, onde "letra02" é a que representará o Estado da segunda carta, 
    "codigo02" é o código da carta (Ex.: A01,B03,C04), "cidade02" o nome da cidade, "estado02" o nome do estado e assim por diante.

    Coloquei o 02 para não dá erro de compilação e puxar os valores da carta 01.
    */
    
        char letra02;
        char codigo02 [10], cidade02 [20], estado02 [20];
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

        printf("\nEscolha uma letra de A a H para representar o seu Estado: ");
        scanf(" %c", &letra02);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo02);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade02);

    //Nesse campo da população, poderia colocar um float ao invés de um int, como comentei na linha 37.
    //Não alterei, pois segui a descrição do Desafio.

        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %u", &populacao02);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area02);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos02);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib02);

// Coloquei a operação de divisão para a densidade populacional e PIB per capita.

    dens_populacional2 = (float) (populacao02 / area02);
    pib_per_capita2 = (float) (pib02 / populacao02);

// Cálculo do Super Poder. Criei a variável densPopulacionalInv para armazenar a inversão dela.

    float superPoder2, densPopulacionalInv2;

    densPopulacionalInv2 = (float) (1 / dens_populacional2);
    superPoder2 = (float) (populacao02 + area02 + pib02 + pontosturisticos02 + pib_per_capita2 + densPopulacionalInv2); 

    //Descrição básica para mostrar os dados de saída da carta 02.

        printf("\nVocê acabou de criar sua segunda carta!\n");

        printf("\nCarta 02: %s\n", estado02);
        printf("\nEstado: %c\n", letra02);
        printf("Código: %s\n", codigo02);
        printf("Cidade: %s\n", cidade02);
        printf("População: %u Habitantes\n", populacao02);
        printf("Área: %.2f Km²\n", area02);
        printf("Pontos Turísticos: %d\n", pontosturisticos02);
        printf("PIB: %.2f Bilhões de Reais\n", pib02);
        printf("Densidade Populacional: %.2f hab/Km²\n", dens_populacional2);
        printf("PIB per capita: %.2f Reais\n", pib_per_capita2);
        printf("Super Poder: %.2f\n", superPoder2);

    // Apenas para tornar o programa intuitível

    char jogar [10];

        printf("\nDigite jogar e veja a carta vencedora: ");
        scanf(" %s", jogar);

    //Comparação das cartas por atributos

    int resulPopulacao, resulArea, resulPontosTurist, resulPib, resulDensPopu, resulPibPerCap, resulSuperPod;

    resulPopulacao = populacao > populacao02;
    resulArea = area > area02;
    resulPontosTurist = pontosturisticos > pontosturisticos02;
    resulPib = pib > pib02;
    resulDensPopu = densPopulacionalInv < densPopulacionalInv2;
    resulPibPerCap = pib_per_capita > pib_per_capita2;
    resulSuperPod = superPoder > superPoder2;

    //Fazer a saída de dados

    printf("\nComparação de Cartas:\n");

    printf("\nPopulação - Carta 1 Venceu: %d\n", resulPopulacao);
    printf("Área - Carta 1 Venceu: %d\n", resulArea);
    printf("Pontos Turísticos - Carta 1 Venceu: %d\n", resulPontosTurist);
    printf("Pib - Carta 1 Venceu: %d\n", resulPib);
    printf("Densidade Populacional - Carta 2 Venceu: %d\n", resulDensPopu);
    printf("Pib Per Capita - Carta 1 Venceu: %d\n", resulPibPerCap);
    printf("Super Poder - Carta 1 Venceu: %d\n", resulSuperPod);


    return 0;
}