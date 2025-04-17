#include <stdio.h>

int main() {

    char letra;
    char codigo [10], cidade [20], estado [20];
    int populacao, pontosturisticos;
    float area, pib;

        printf("Super Trunfo - Países \n");
       
        printf("\nVocê precisa cadastrar suas cartas para iniciar o jogo. Escolha 2 Estados para criar suas cartas. \n");

        printf("\nEstado 01: ");
        scanf(" %s", &estado);

        printf("\nAdicione os atributos a sua carta!\n");
        
        printf("\nEscolha uma letra de A a H para representar o seu estado: ");
        scanf(" %c", &letra);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade);
        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %d", &populacao);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib);

        printf("\nParabéns, você acabou de criar sua primeira carta! \n");

        printf("\nCarta 01: %s\n", estado);
        printf("\nEstado: %c\n", letra);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d Habitantes\n", populacao);
        printf("Área: %.2f Km²\n", area);
        printf("Pontos Turísticos: %d\n", pontosturisticos);
        printf("PIB: %.2f Bilhões de Reais\n", pib);

        char letra02;
        char codigo02 [10], cidade02 [20], estado02 [20];
        int populacao02, pontosturisticos02;
        float area02, pib02;

        printf("\nAgora, vamos criar a sua segunda carta! Escolha o nome do Estado:\n");
        
        printf("\nEstado 02: ");
        scanf(" %s", estado02);

        printf("\nAdicione os atributos a sua carta!\n");

        printf("\nEscolha uma letra de A a H para representar o seu Estado: ");
        scanf(" %c", &letra02);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: ");
        scanf(" %s", &codigo02);
        printf("Defina o nome da Cidade do seu Estado: ");
        scanf(" %s", &cidade02);
        printf("Qual o número de habitantes de sua Cidade?: ");
        scanf(" %d", &populacao02);
        printf("Defina a área da sua cidade em Km² (Digite apenas o número): ");
        scanf(" %f", &area02);
        printf("Quantos pontos turísticos há em sua cidade?: ");
        scanf(" %d", &pontosturisticos02);
        printf("Qual o PIB da sua cidade: ");
        scanf("  %f", &pib02);

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