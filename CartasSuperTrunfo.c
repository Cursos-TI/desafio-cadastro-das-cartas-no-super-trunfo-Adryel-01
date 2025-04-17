#include <stdio.h>

int main() {

    /* Adicionei as variáveis que utilizaremos, onde "letra" é a que representará o Estado, 
    "codigo" é o código da carta (Ex.: A01,B03,C04), "cidade" o nome da cidade, "estado" o nome do estado e assim por diante.
    */

    char letra;
    char codigo [10], cidade [20], estado [20];
    int populacao, pontosturisticos;
    float area, pib;


        printf("Super Trunfo - Países \n");
       
    // Adicionei uma pequena descrição para introduzir.

        printf("\nVocê precisa cadastrar suas cartas para iniciar o jogo. Escolha 2 Estados para criar suas cartas. \n");

    // Coloquei esse campo aqui para o usuário já colocar o nome do estado, separado dos demais atributos.
    
        printf("\nEstado 01: ");
        scanf(" %s", &estado);

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
        scanf(" %d", &populacao);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib);

    //Descrição básica para mostrar os dados de saída da carta 01

        printf("\nParabéns, você acabou de criar sua primeira carta! \n");

        printf("\nCarta 01: %s\n", estado);
        printf("\nEstado: %c\n", letra);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d Habitantes\n", populacao);
        printf("Área: %.2f Km²\n", area);
        printf("Pontos Turísticos: %d\n", pontosturisticos);
        printf("PIB: %.2f Bilhões de Reais\n", pib);

    /* Adicionei as variáveis que utilizaremos na carta 2, onde "letra02" é a que representará o Estado da segunda carta, 
    "codigo02" é o código da carta (Ex.: A01,B03,C04), "cidade02" o nome da cidade, "estado02" o nome do estado e assim por diante.

    Coloquei o 02 para não dá erro de compilação e puxar os valores da carta 01.
    */
    
        char letra02;
        char codigo02 [10], cidade02 [20], estado02 [20];
        int populacao02, pontosturisticos02;
        float area02, pib02;

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
        scanf(" %d", &populacao02);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area02);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos02);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib02);

    //Descrição básica para mostrar os dados de saída da carta 02.

        printf("\nVocê acabou de criar sua segunda carta!\n");

        printf("\nCarta 02: %s\n", estado02);
        printf("\nEstado: %c\n", letra02);
        printf("Código: %s\n", codigo02);
        printf("Cidade: %s\n", cidade02);
        printf("População: %d Habitantes\n", populacao02);
        printf("Área: %.2f Km²\n", area02);
        printf("Pontos Turísticos: %d\n", pontosturisticos02);
        printf("PIB: %.2f Bilhões de Reais\n", pib02);

        printf("\nA continuar...\n");

    return 0;
}