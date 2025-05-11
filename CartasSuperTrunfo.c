#include <stdio.h>

int main(){
    char V_estado1, V_cod_carta1[4], V_nome_cidade1[50], V_estado2, V_cod_carta2[4], V_nome_cidade2[50];
    unsigned short int V_result_popu, V_result_area, V_result_pib, V_result_pont_turist, V_result_dens_popu, V_result_pib_per_capi, V_result_sup_poder;
    unsigned int V_populacao1, V_pont_turisticos1, V_populacao2, V_pont_turisticos2;
    float V_area1, V_pib1, V_per_capita1, V_densidade1, V_super_poder1, V_area2, V_pib2, V_per_capita2, V_densidade2, V_super_poder2;

    //Carta 1
        printf("Carta 1: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf(" %c", &V_estado1);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", V_cod_carta1);
        //Nome da Cidade
        printf(" Digite o nome da cidade: ");
        scanf("%s", V_nome_cidade1);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao1);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area1);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib1);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos1);

        V_densidade1 = (float)V_populacao1 / V_area1;
        V_per_capita1 = (V_pib1 * 1000000000) / V_populacao1;

    printf("Carta 1:\n");
    printf("Estado: %c\n", V_estado1);
    printf("Codigo: %s\n", V_cod_carta1);
    printf("Nome da Cidade: %s\n", V_nome_cidade1);
    printf("População: %d\n", V_populacao1);
    printf("Area: %.2f Km²\n", V_area1);
    printf("PIB: %.2f bilhões de reais\n", V_pib1);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", V_densidade1);
    printf("PIB per Capita: %.2f reais\n", V_per_capita1);

    //super poder
    V_super_poder1 = V_populacao1 + V_area1 + V_pib1 + V_pont_turisticos1 + V_per_capita1 - V_densidade1;

    //Carta 2
        printf("Carta 2: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf(" %c", &V_estado2);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", V_cod_carta2);
        //Nome da Cidade
        printf(" Digite o nome da cidade:");
        scanf("%s", V_nome_cidade2);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao2);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area2);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib2);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos2);

        V_densidade2 = (float)V_populacao2 / V_area2;
        V_per_capita2 = (float)(V_pib2 * 1000000000) / V_populacao2;

    printf("Carta 2:\n");
    printf("Estado: %c\n", V_estado2);
    printf("Codigo: %s\n", V_cod_carta2);
    printf("Nome da Cidade: %s\n", V_nome_cidade2);
    printf("População: %d\n", V_populacao2);
    printf("Area: %.2f Km²\n", V_area2);
    printf("PIB: %.2f bilhões de reais\n", V_pib2);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", V_densidade2);
    printf("PIB per Capita: %.2f reais\n", V_per_capita2);

    //super poder
    V_super_poder2 = V_populacao2 + V_area2 + V_pib2 + V_pont_turisticos2 + V_per_capita2 - V_densidade2;

    //Carta vencedora
    V_result_popu = V_populacao1 > V_populacao2;
    V_result_area = V_area1 > V_area2;
    V_result_pib = V_pib1 > V_pib2;
    V_result_pont_turist = V_pont_turisticos1 > V_pont_turisticos2;
    V_result_dens_popu = V_densidade1 > V_densidade2;
    V_result_pib_per_capi = V_per_capita1 > V_per_capita2;
    V_result_sup_poder = V_super_poder1 > V_super_poder2;

    printf("\nComparação de cartas:\n");
    printf(" População: Carta 1 venceu (%u)\n", V_result_popu);
    printf(" Área: Carta 1 venceu (%u)\n", V_result_area);
    printf(" PIB: Carta 1 venceu (%u)\n", V_result_pib);
    printf(" Pontos Turísticos: Carta 1 venceu (%u)\n", V_result_pont_turist);
    printf(" Densidade Populacional: Carta 1 venceu (%u)\n", V_result_dens_popu);
    printf(" PIB per Capita: Carta 1 venceu (%u)\n", V_result_pib_per_capi);
    printf(" Super Poder: Carta 1 venceu (%u)\n", V_result_sup_poder);

    return 0;
}
