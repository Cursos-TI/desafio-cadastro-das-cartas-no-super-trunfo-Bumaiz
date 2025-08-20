#include <stdio.h>

int main() {

    // --- Declaração de Variáveis para a primeira Carta --- 
    // Aqui se encontra todas as Variáveis armazenadas e todas as informações da primeira carta.

    char estado1;
    char codigo1[4]; // Ex: "A01" + caractere nulo '\0'
    char cidade1[12];
    int popu1;
    float area1;
    float PIB1;
    int pontostu1;


     // --- Declaração de Variáveis para a Carta 2 --- 
    // Variáveis para armazenar todas as informações da segunda carta.

    char estado2;
    char codigo2[4]; // Ex: "A02" + caractere nulo '\0'
    char cidade2[12];
    int popu2;
    float area2;
    float PIB2;
    int pontostu2;



    // --- Início do Programa e Entrada de Dados da primeira Carta --- 
    // Instruções claras para o usuário cadastrar a primeira carta. 

    printf ("Informe o primeiro estado: \n");
    scanf ("%s", &estado1);
    printf ("Informe o codigo da primeira carta: \n");
    scanf ("%s", codigo1);
    printf ("Digite a cidade da primeira carta: \n");
    scanf ("%s", cidade1);
    printf ("Digite a populacao da primeira carta: \n");
    scanf ("%d", &popu1);
    printf ("Digite a area da primeira carta: \n");
    scanf ("%f", &area1);
    printf ("Digite o PIB da primeira carta: \n");
    scanf ("%f", &PIB1);
    printf ("Digite quantos Pontos Turisticos tem na primeira carta: \n");
    scanf ("%d", &pontostu1);


    // --- Início do Programa e Entrada de Dados da Segunda Carta --- 
    // Instruções claras para o usuário cadastrar a Segunda carta. 

    printf ("Informe o segundo estado: \n");
    scanf ("%s", &estado2);
    printf ("Informe o codigo da segunda carta: \n");
    scanf ("%s", codigo2);
    printf ("Digite a cidade da segunda carta: \n");
    scanf ("%s", cidade2);
    printf ("Digite a populacao da segunda carta: \n");
    scanf ("%d", &popu2);
    printf ("Digite a area da segunda carta: \n");
    scanf ("%f", &area2);
    printf ("Digite o PIB da segunda carta: \n");
    scanf ("%f", &PIB2);
    printf ("Digite quantos Pontos Turisticos tem na segunda carta: \n");
    scanf ("%d", &pontostu2);



    // --- Exibição dos Dados da Primeira Carta --- 
    // Mostra os dados da Primeira carta. 

    printf("Carta 1: \n");
    printf("Estado: %s\n", &estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", popu1);
    printf("Area: %.4f km²\n", area1);
    printf("PIB: %.4f bilhões de reais\n", PIB1);
    printf("Números de pontos turisticos: %d\n", pontostu1);

    printf("\n"); // Adiciona uma linha em branco para separar as cartas.


    // --- Exibição dos Dados da Segunda Carta --- 
    // Mostra os dados da segunda carta. 

    printf("Carta 2: \n");
    printf("Estado: %s\n", &estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d Habitantes\n", popu2);
    printf("Area: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", PIB2);
    printf("Números de pontos turisticos: %d\n", pontostu2);

    return 0; // Finaliza o programa.
}