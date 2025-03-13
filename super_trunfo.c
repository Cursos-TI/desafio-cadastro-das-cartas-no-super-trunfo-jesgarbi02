#include <stdio.h>

    int main() {
        
      char estado[10], cidade[20];
      int carta, turismo;
      unsigned int populacao;
      float area, pib;
      float percapita, densidade;

    //INCLUSÃO | Nível Aventureiro
      float dp, ppc;
    //INCLUSÃO | Nível Mestre
      float superpoderA;
      char estado2[10], cidade2[20];
      int carta2, turismo2;
      unsigned int populacao2;
      float area2, pib2;

    //INCLUSÃO | Nível Aventureiro
      float DP, PPC; 
    //INCLUSÃO | Nível Mestre
      float superpoderB;
      unsigned int populacaoWIN;
      float areaWIN, pibWIN, dpWIN, ppcWIN, superWIN;
      int turismoWIN;

// ESCOLHA: CARTA N1

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

    //INCLUSÃO | Nível Aventureiro

        dp = (float)populacao / area;

        ppc = (float)pib / populacao;

//ESCOLHA CARTA N2

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

    //INCLUSÃO: | Nível Aventureiro

        DP = (float)populacao2 / area2;

        PPC = (float)pib2 / populacao2;


//RESPOSTAS

        printf("\nCarta 1\n");

        printf("Estado: %s\n", estado);
        printf("Código da carta: %s%02d\n", estado, carta);
        printf("Nome da cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km2\n", area);
        printf("PIB: %.2f Bilhões de reais\n", pib);
        printf("Número de pontos turísticos: %d\n", turismo);
    //INCLUSÃO | Nível Aventureiro
        printf("A desindade populacional é: %.2f\n", dp);
        printf("O PIB per Capita é de: %.2f\n", ppc);
    

        
        printf("\nCarta 2\n");

        printf("Estado: %s\n", estado2);
        printf("Código da carta: %s%02d\n", estado2, carta2);
        printf("Nome da cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km2\n", area2);
        printf("PIB: %.2f Bilhões de reais\n", pib2);
        printf("Número de pontos turísticos: %d\n", turismo2);
    //INCLUSÃO | Nível Aventureiro
        printf("A desindade populacional é: %.2f\n", DP);
        printf("O PIB per Capita é de: %.2f\n", PPC);
      
    // SOMA DO PODER | Nível Mestre

        superpoderA = populacao + area + pib + turismo + ppc + (1 / dp);
        superpoderB = populacao2 + area2 + pib2 + turismo2 + PPC + (1 / DP);

    // CALCULO DE COMPARAÇÃO | Nível Mestre

        populacaoWIN = populacao > populacao2;
        areaWIN = area > area2;
        pibWIN = pib > pib2;
        turismoWIN = turismo > turismo2;
        dpWIN = dp < DP;
        ppcWIN = ppc > PPC;
        superWIN = superpoderA > superpoderB;
        
// RESULTADO COMPARAÇÃO | Nível Mestre

        printf("\nCOMPARAÇÃO DE CARTAS\n");
        printf("População: Carta %u venceu\n", populacaoWIN);
        printf("Área: Carta %.0f venceu\n", areaWIN);
        printf("PIB: Carta %.0f venceu\n", pibWIN);
        printf("Pontos Turisticos: Carta %d venceu\n", turismoWIN);
        printf("Densidade Populacional: Carta %.0f venceu\n", dpWIN);
        printf("PIB per Capita: Carta %.0f venceu\n", ppcWIN);
        printf("Super Poder: Carta %.0f venceu\n", superWIN);
                    
        return 0;
}