#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1[50], estado2[50], cidade1[50], cidade2[50];
    int população1, população2, pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    printf("\n\nOlá, este é um prototipo de super trunfo\naqui vamos cadastrar suas duas cartas.\n\npressione enter para prosseguir.\n");
    scanf("enter");

    printf("primeiro, vamos incluir os dados da carta 1\nuse (-) no lugar de espaços.\n\n");
    
    printf("Carta 1\n\ninsira o nome do estado: ");
    scanf("%s", estado1);

    printf("Ok, agora a cidade: ");
    scanf("%s", cidade1);

    printf("Beleza, qual a população desta cidade? ");
    scanf("%d", &população1);

    printf("Qual o produto interno bruto desta cidade? ");
    scanf("%f", &pib1);

    printf("Agora informe a área da cidade ");
    scanf("%f", &area1);

    printf("Por ultimo, quantos pontos turísticos esta cidade tem? ");
    scanf("%d", &pturisticos1);

    printf("\n\nMuito Bem, agora vamos customizar a carta 2.\n\n");
    
    printf("Carta 2\n\ninsira o nome do estado: ");
    scanf("%s", estado2);

    printf("Ok, agora a cidade: ");
    scanf("%s", cidade2);

    printf("Beleza, qual a população desta cidade? ");
    scanf("%d", &população2);

    printf("Qual o produto interno bruto desta cidade? ");
    scanf("%f", &pib2);

    printf("Agora informe a área da cidade ");
    scanf("%f", &area2);

    printf("Por ultimo, quantos pontos turísticos esta cidade tem? ");
    scanf("%d", &pturisticos2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Aqui estão suas cartas:\n\nCarta 1\n Código da carta:A01\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f Km^2\n PIB: %fR$\n Número de pontos turísticos: %d", estado1, cidade1, população1, area1, pib1, pturisticos1);
    printf("\n\nCarta 2\n Código da carta: A02\n Estado: %s\n Cidade: %s\n População: %d\n Área: %f Km^2\n PIB: %f R$\n Número de pontos turísticos: %d", estado2, cidade2, população2, area2, pib2, pturisticos2);
   
    printf("\n\nMuito bom, por enquanto é isso, espero que tenha gostado, até a próxima\n\n:D\n\n");
   
   
   
    return 0;
}
