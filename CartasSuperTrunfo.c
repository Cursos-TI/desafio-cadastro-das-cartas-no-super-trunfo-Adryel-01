#include <stdio.h>
#include "CartasSuperTrunfo.h"

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Especifiquei quais letras serão aceitáveis na seção Estado. O usuário pode selecionar uma das 8 letras.

    char letra;
    //O usuário deve colocar a inicial do Estado com a numeração da carta. Formato: A01, B02. O nome da cidade também.
    char codigo [10], cidade [20], estado [20];
    int populacao, pontosturisticos;
    float area, pib;

        printf("Super Trunfo - Países \n \n");
       
        printf("Você precisa cadastrar suas cartas para iniciar o jogo. Escolha 2 Estados para criar suas cartas.\n \n");

        printf("Estado 01: ");
        scanf("%s", estado);
        printf("\n");

        printf("Adicione atributos a sua carta e deixe-a poderosa!\n");
        
        printf("Escolha uma letra de A a H para representar o seu estado: ");
        scanf(" %c", &letra);
        printf("Código da Carta - Escolha a letra do seu estado seguida de um número de 01 a 04: \n");
        scanf("%s", codigo);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}