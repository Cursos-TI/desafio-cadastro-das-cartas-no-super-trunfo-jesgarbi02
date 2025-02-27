#include <stdio.h>

    int main() {
        
      char estado[10], cidade[20];
      int populacao, carta, turismo;
      float area, pib;
      float percapita, densidade;

//inclusão: nível aventureiro
      float dp, ppc;

      char estado2[10], cidade2[20];
      int populacao2, carta2, turismo2;
      float area2, pib2;

//inclusão: nível aventureiro
      float DP, PPC;     

// CARTA N1

      printf("Carta 1\n");

        printf("Informe um estado (Uma letra de 'A' a 'H'): ");
        scanf("%s", estado);

        printf("Digite um numero de 01 a 04: ");
        scanf("%d", &carta);

        printf("Digite o nome da cidade: ");
        scanf("%s", cidade);

        printf("Qual o número de habitantes?: ");
        scanf("%d", &populacao);

        printf("Qual a area em km²?: ");
        scanf("%f", &area);

        printf("Qual o PIB (Produto Interno Bruto) da cidade?: ");
        scanf("%f", &pib);

        printf("Quantos pontos turisticos tem na cidade?: ");
        scanf("%d", &turismo);

//inclusão: nível aventureiro

        dp = (float)(pib / populacao);

        ppc = (float)(populacao / pib);

//CARTA N2

      printf("\nCarta 2\n");

        printf("Informe um estado (Uma letra de 'A' a 'H'): ");
        scanf("%s", estado2);

        printf("Digite um numero de 01 a 04: ");
        scanf("%d", &carta2);

        printf("Digite o nome da cidade: ");
        scanf("%s", cidade2);

        printf("Qual o número de habitantes?: ");
        scanf("%d", &populacao2);

        printf("Qual a area em km²?: ");
        scanf("%f", &area2);

        printf("Qual o PIB (Produto Interno Bruto) da cidade?: ");
        scanf("%f", &pib2);

        printf("Quantos pontos turisticos tem na cidade?: ");
        scanf("%d", &turismo2);

//inclusão: nível aventureiro

        DP = (float)(pib2 / populacao2);

        PPC = (float)(populacao2 / pib2);


//RESPOSTAS

        printf("\nCarta 1\n");

        printf("Estado: %s\n", estado);
        printf("Código da carta: %s%02d\n", estado, carta);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km2\n", area);
        printf("PIB: %.2f Bilhões de reais\n", pib);
        printf("Número de pontos turísticos: %d\n", turismo);
//inclusão: nível aventureiro
        printf("O PIB per Capita é de: %.2f\n", dp);
        printf("A desindade populacional é: %.2f\n", ppc);

        
        printf("\nCarta 2\n");

        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s%02d\n", estado2, carta2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km2\n", area2);
        printf("PIB: %.2f Bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turismo2);
//inclusão: nível aventureiro
        printf("O PIB per Capita é de: %.2f\n", DP);
        printf("A desindade populacional é: %.2f\n", PPC);
        
        return 0;
}