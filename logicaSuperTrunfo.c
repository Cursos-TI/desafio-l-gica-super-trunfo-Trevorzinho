#include <stdio.h> 

// nivel mestre

int main() {
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2, escolha1, escolha2;
    float area1, area2, pib1, pib2, densidade1, densidade2, inversa_dens1, inversa_dens2;
    float pibcap1, pibcap2, superpoder1, superpoder2, valorA1, valorB1, valorA2, valorB2;

    char nome1[100], nome2[100], codigo1[3], codigo2[3];
    char estado1[50], estado2[50], atributo1[50], atributo2[50];

    // menu
    printf("Digite o nome da carta 1: ");
    scanf("%s", nome1);

    printf("Digite o estado da carta 1 (de A a H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a área(km²) da carta 1: ");
    scanf("%f", &area1);

    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de lugares turísticos da carta 1: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    inversa_dens1 = area1 / populacao1;
    pibcap1 = pib1 / populacao1;

    printf("\nDigite o nome da carta 2: ");
    scanf("%s", nome2);

    printf("Digite o estado da carta 2 (de A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a área(km²) da carta 2: ");
    scanf("%f", &area2);

    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de lugares turísticos da carta 2: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    pibcap2 = pib2 / populacao2;
    inversa_dens2 = area2 / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + turistico1 + pibcap1 + inversa_dens1;
    superpoder2 = populacao2 + area2 + pib2 + turistico2 + pibcap2 + inversa_dens2;

    // mostrar as cartas do usuario
    printf("\nCarta 1: %s"
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %lu habitantes"
           "\nPIB: R$%.2f"
           "\nPIB per capita: R$%.2f"
           "\nDensidade Populacional: %.2f"
           "\nQuantidade de lugares turísticos: %d",
           nome1, codigo1, estado1, area1, populacao1, pib1, pibcap1, densidade1, turistico1);

    printf("\n\nCarta 2: %s"
           "\nCódigo: %s"
           "\nEstado: %s"
           "\nÁrea: %.2f km²"
           "\nPopulação: %lu habitantes"
           "\nPIB: R$%.2f"
           "\nPIB per capita: R$%.2f"
           "\nDensidade Populacional: %.2f"
           "\nQuantidade de lugares turísticos: %d",
           nome2, codigo2, estado2, area2, populacao2, pib2, pibcap2, densidade2, turistico2);

    // escolha dos atributos 
    printf("\n\nEscolha o primeiro atributo para comparar:"
           "\n1. Área"
           "\n2. População"
           "\n3. PIB"
           "\n4. PIB per Capta"
           "\n5. Densidade Populacional"
           "\n6. Lugares Turísticos"
           "\n7. Super Poder\n");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            printf("----- Você escolheu a opção Área -----\n");
            valorA1 = area1;
            valorB1 = area2;
            sprintf(atributo1, "Área"); 
            break;
        case 2:
            printf("----- Você escolheu a opção População -----\n");
            valorA1 = populacao1;
            valorB1 = populacao2;
            sprintf(atributo1, "População");
            break;
        case 3:
            printf("----- Você escolheu a opção PIB -----\n");
            valorA1 = pib1;
            valorB1 = pib2;
            sprintf(atributo1, "PIB");
            break;
        case 4:
            printf("----- Você escolheu a opção PIB per Capta -----\n");
            valorA1 = pibcap1;
            valorB1 = pibcap2;
            sprintf(atributo1, "PIB per Capta");
            break;
        case 5:
            printf("----- Você escolheu a opção Densidade Populacional -----\n");
            valorA1 = inversa_dens1;
            valorB1 = inversa_dens2;
            sprintf(atributo1, "Densidade Populacional");
            break;
        case 6:
            printf("----- Você escolheu a opção Lugares Turísticos -----\n");
            valorA1 = turistico1;
            valorB1 = turistico2;
            sprintf(atributo1, "Lugares Turísticos");
            break;
        case 7:
            printf("----- Você escolheu a opção Super Poder -----\n");
            valorA1 = superpoder1;
            valorB1 = superpoder2;
            sprintf(atributo1, "Super Poder");
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):"
           "\n1. Área"
           "\n2. População"
           "\n3. PIB"
           "\n4. PIB per Capta"
           "\n5. Densidade Populacional"
           "\n6. Lugares Turísticos"
           "\n7. Super Poder\n");
    scanf("%d", &escolha2);

    if (escolha2 == escolha1) { 
        printf("Você escolheu dois atributos iguais! Encerrando o jogo.\n"); 
        return 0;
    }

    switch (escolha2) {
        case 1:
            printf("----- Você escolheu a opção Área -----\n");
            valorA2 = area1;
            valorB2 = area2;
            sprintf(atributo2, "Área");
            break;
        case 2:
            printf("----- Você escolheu a opção População -----\n");
            valorA2 = populacao1;
            valorB2 = populacao2;
            sprintf(atributo2, "População");
            break;
        case 3:
            printf("----- Você escolheu a opção PIB -----\n");
            valorA2 = pib1;
            valorB2 = pib2;
            sprintf(atributo2, "PIB");
            break;
        case 4:
            printf("----- Você escolheu a opção PIB per Capta -----\n");
            valorA2 = pibcap1;
            valorB2 = pibcap2;
            sprintf(atributo2, "PIB per Capta");
            break;
        case 5:
            printf("----- Você escolheu a opção Densidade Populacional -----\n");
            valorA2 = inversa_dens1;
            valorB2 = inversa_dens2;
            sprintf(atributo2, "Densidade Populacional");
            break;
        case 6:
            printf("----- Você escolheu a opção Lugares Turísticos -----\n");
            valorA2 = turistico1;
            valorB2 = turistico2;
            sprintf(atributo2, "Lugares Turísticos");
            break;
        case 7:
            printf("----- Você escolheu a opção Super Poder -----\n");
            valorA2 = superpoder1;
            valorB2 = superpoder2;
            sprintf(atributo2, "Super Poder");
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    // final round fight
    printf("\nPrimeira comparação (%s):\n", atributo1);
    printf("%s: %.2f\n", nome1, valorA1);
    printf("%s: %.2f\n", nome2, valorB1);
    if (valorA1 > valorB1) {
        printf("Vencedor na categoria %s é a carta 1 (%s)!\n", atributo1, nome1);
    } else if (valorA1 < valorB1) {
        printf("Vencedor na categoria %s é a carta 2 (%s)!\n", atributo1, nome2);
    } else {
        printf("Empate na categoria %s!\n", atributo1);
    }

    printf("\nSegunda comparação (%s):\n", atributo2);
    printf("%s: %.2f\n", nome1, valorA2);
    printf("%s: %.2f\n", nome2, valorB2);
    if (valorA2 > valorB2) {
        printf("Vencedor na categoria %s é a carta 1 (%s)!\n", atributo2, nome1);
    } else if (valorA2 < valorB2) {
        printf("Vencedor na categoria %s é a carta 2 (%s)!\n", atributo2, nome2);
    } else {
        printf("Empate na categoria %s!\n", atributo2);
    }

    float soma1 = valorA1 + valorA2;
    float soma2 = valorB1 + valorB2;

    printf("\nSoma total dos dois atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("\nVencedor desse round é a carta 1 (%s)!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nVencedor desse round é a carta 2 (%s)!\n", nome2);
    } else {
        printf("\nEmpate nesse round!\n");
    }

    return 0;
}
