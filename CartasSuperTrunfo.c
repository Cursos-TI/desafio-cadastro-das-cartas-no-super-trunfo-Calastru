#include <stdio.h>

int main(){
    char V_estado, V_cod_carta[4], V_nome_cidade[50];
    int V_populacao, V_pont_turisticos;
    float V_area, V_pib;

    //Carta 1
        printf("Carta 1: ");
        //Estado
        printf("\n Digite o estado: ");
        scanf("%c", &V_estado);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", &V_cod_carta);
        //Nome da Cidade
        printf(" Digite o nome da cidade: ");
        scanf("%s", &V_nome_cidade);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos);

    printf("Carta 1:\n");
    printf("Estado: %c\n", V_estado);
    printf("Codigo: %s\n", V_cod_carta);
    printf("Nome da Cidade: %s\n", V_nome_cidade);
    printf("População: %d\n", V_populacao);
    printf("Area: %.2f Km²\n", V_area);
    printf("PIB: %.2f bilhões de reais\n", V_pib);
    printf("Numero de Pontos Turisticos: %d\n", &V_pont_turisticos);

    //Carta 2
        printf("Carta 2: ");
        //Estado
        printf("\n Digite o estado: ");
        scanf("%c", &V_estado);
        //Codigo
        printf(" Digite o codigo: ");
        scanf("%s", V_cod_carta);
        //Nome da Cidade
        printf(" Digite o nome da cidade:");
        scanf("%s", V_nome_cidade);
        //População
        printf(" Digite a população: ");
        scanf("%d", &V_populacao);
        //Area
        printf(" Digite a area: ");
        scanf("%f", &V_area);
        //PIB
        printf(" Digite o PIB: ");
        scanf("%f", &V_pib);
        //Pontos Turisticos
        printf(" Digite o numerode pontos turisticos: ");
        scanf("%d", &V_pont_turisticos);

    printf("Carta 2:\n");
    printf("Estado: %c\n", V_estado);
    printf("Codigo: %s\n", V_cod_carta);
    printf("Nome da Cidade: %s\n", V_nome_cidade);
    printf("População: %d\n", V_populacao);
    printf("Area: %.2f Km²\n", V_area);
    printf("PIB: %.2f bilhões de reais\n", V_pib);
    printf("Numero de Pontos Turisticos: %d\n", V_pont_turisticos);

    return 0;
}
