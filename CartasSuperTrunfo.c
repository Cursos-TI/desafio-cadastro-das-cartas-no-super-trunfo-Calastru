#include <stdio.h>

int main(){
    char V_estado1, V_estado2, V_cod_carta1[4], V_nome_cidade1[50], V_cod_carta2[4], V_nome_cidade2[50];
    int V_populacao1, V_pont_turisticos1, V_populacao2, V_pont_turisticos2;
    float V_area1, V_pib1, V_area2, V_pib2;

    //carta 1
        printf("Carta 1: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf("%c", &V_estado1);
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

    //carta 2
        printf("Carta 2: \n");
        //Estado
        printf(" Digite o estado: ");
        scanf("%c", &V_estado2);
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
    
    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", V_estado1);
    printf("Codigo: %s\n", V_cod_carta1);
    printf("Nome da Cidade: %s\n", V_nome_cidade1);
    printf("População: %d\n", V_populacao1);
    printf("Area: %.2f Km²\n", V_area1);
    printf("PIB: %.2f bilhões de reais\n", V_pib1);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos1);

    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", V_estado2);
    printf("Codigo: %s\n", V_cod_carta2);
    printf("Nome da Cidade: %s\n", V_nome_cidade2);
    printf("População: %d\n", V_populacao2);
    printf("Area: %.2f Km²\n", V_area2);
    printf("PIB: %.2f bilhões de reais\n", V_pib2);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos2);

    return 0;
}
