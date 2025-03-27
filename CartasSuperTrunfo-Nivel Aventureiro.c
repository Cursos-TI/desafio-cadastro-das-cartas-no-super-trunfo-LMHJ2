#include <stdio.h>

char estado1[50], estado2[50], cidade1[50], cidade2[50];
int população1, população2, pturisticos1, pturisticos2;
float area1, area2, pib1, pib2, densidade1, densidade2, PPC1, PPC2;

  //coleta de dados
    void entradadados() {
        printf("\n\nOlá, este é um prototipo de super trunfo\naqui vamos cadastrar suas duas cartas.\n\npressione enter para prosseguir.\n");
        scanf("enter");

        printf("primeiro, vamos incluir os dados da carta 1\nuse (-) no lugar de espaços.\n\n");printf("Carta 1\n\ninsira o nome do estado: ");
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


    }
  //calculo de dados
    float calcular() {
        densidade1 = população1 / area1;
        densidade2 = população2 / area2;

        PPC1 = pib1 / população1;
        PPC2 = pib2 / população2;

    }


  //impressao de dados
  void imprimircarta() {
    printf("\n\nAqui está a carta 1:\n\nCarta 1\n Código da carta:A01\n ");
    printf("Estado: %s\n Cidade: %s\n População: %d\n Área: %2f Km^2\n ",estado1, cidade1, população1, area1);
    printf("PIB: %2f R$\n Número de pontos turísticos: %d\n ", pib1, pturisticos1);
    printf("Densidade: %2f\n Pib per capta: %2f", densidade1, PPC1);

    printf("\n\nAqui está a carta 2:\n\nCarta 2\n Código da carta:A02\n ");
    printf("Estado: %s\n Cidade: %s\n População: %d\n Área: %2f Km^2\n ",estado2, cidade2, população2, area2);
    printf("PIB: %2f R$\n Número de pontos turísticos: %d\n ", pib1, pturisticos1);
    printf("Densidade: %2f\n Pib per capta: %2f", densidade2, PPC2);


  }

//Função Principal
  int main() {
    entradadados();
    calcular();
    imprimircarta();
    return 0;
    }