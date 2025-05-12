#include <stdio.h>

// nivel novato

int main() {
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibcap1, pibcap2, superpoder1, superpoder2;

    char nome1[100], nome2[100];
    char codigo1[3], codigo2[3];
    char estado1[50], estado2[50];

    printf("================ Super Trunfo! ================ \n");
    printf("Digite o nome da carta 1: \n");
    scanf("%s", nome1);

    printf("Digite o estado da carta 1 (de A a H): \n");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite a área(km²) da carta 1: \n");
    scanf("%f", &area1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de lugares túristicos da carta 1: \n");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    pibcap1 = pib1 / populacao1;

    printf("Digite o nome da carta 2: \n");
    scanf("%s", nome2);

    printf("Digite o estado da carta 2 (de A a H): \n");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite a área(km²) da carta 2: \n");
    scanf("%f", &area2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de lugares túristicos da carta 2: \n");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;

    printf("\n=========================================================="
           "\nCarta 1: %s"
           "\n=========================================================="
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %d habitantes"
           "\nPIB: R$%.2f"
           "\nPIB per capta: R$%.2f"
           "\nDensidade Populacional: %.2f"
           "\nQuantidade de lugares túristicos: %d"
           "\n==========================================================",
           nome1, codigo1, estado1, area1, populacao1, pib1, pibcap1, densidade1, turistico1);

    printf("\n=========================================================="
           "\nCarta 2: %s"
           "\n=========================================================="
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %d habitantes"
           "\nPIB: R$%.2f"
           "\nPIB per capta: R$%.2f"
           "\nDensidade Populacional: %.2f"
           "\nQuantidade de lugares túristicos: %d"
           "\n==========================================================",
           nome2, codigo2, estado2, area2, populacao2, pib2, pibcap2, densidade2, turistico2);

       // invertendo o cálculo da densidade pra calcular o inverso dela
       superpoder1 = populacao1 + area1 + pib1 + turistico1 + pibcap1 + (area1 / populacao1);
       superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibcap2 + (area2 / populacao2);

       printf("\n=========================================================="
              "\nComparação de Cartas (Atributo População):"
              "\n==========================================================");
              if (populacao1 > populacao2){
                     printf("\nA Carta 1 (%s) venceu!", &nome1); 
              } else {
                     printf("\nA Carta 2 (%s) venceu!", &nome2);
              };
    return 0;
}
