#include <stdio.h>
#include <string.h>

//Super Trunfo

const char* nome_estado(char letra) 
{
    switch (letra) {
        case 'A':
        case 'a': return "Bahia";
        case 'B':
        case 'b': return "Parana";
        case 'C':
        case 'c': return "Amazonas";
        case 'D':
        case 'd': return "Amapa";
        case 'E':
        case 'e': return "Rio Grande do Sul";
        case 'F':
        case 'f': return "Santa Catarina";
        case 'G':
        case 'g': return "Sao Paulo";
        case 'H':
        case 'h': return "Rio de Janeiro";
        default: return "Escolha um dos estados listados.";
    }
};

int main(){ 

//Primeira carta
char estado1;
char codigo_carta1[3];
char nome_cidade1[30];
int pontos_tur1, populacao1;
float area1, pib1, densidade1, pib_percapita1 = 0;

//Segunda carta
char estado2;
char codigo_carta2[3];
char nome_cidade2[30];
int pontos_tur2, populacao2;
float area2, pib2, densidade2, pib_percapita2 = 0;


//Início da primeira carta

printf("Desafio SuperTrunfo\n\n");
printf("Insira os dados solicitados abaixo para criar sua carta de Super Trunfo!\n");

printf("\nA- Bahia \nB- Parana \nC- Amazonas \nD- Amapa" 
"\nE- Rio Grande do Sul \nF- Santa Catarina \nG- Sao Paulo \nH- Rio de Janeiro\n");
printf("\nSelecione o Estado: \n");
scanf("%s", &estado1);

printf("Código da Carta (1 a 4): \n");
scanf("%s", &codigo_carta1);
                                                                                    
printf("Nome da Cidade (Sem espaços): \n");
scanf("%s", nome_cidade1);

printf("População: \n");
scanf("%d", &populacao1);

printf("Área (em km²): \n");
scanf("%f""m²", &area1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_tur1);

//Mensagem de retorno dos dados montados na carta

printf("\nCarta criada com sucesso!\n");

//Calcúlo dos outros desafios

densidade1 = (float) populacao1 / area1;
pib_percapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

//Esqueleto printf da carta 1

printf("\nCarta 1:");
printf("\nEstado: %s\n", nome_estado(estado1));
printf("Código: %c0%s\n", estado1, codigo_carta1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %d habitantes\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
printf("Densidade populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f reais\n", pib_percapita1);


//Início da segunda carta----------------------------------------------------------------------

printf("\n\nInsira os dados solicitados abaixo para criar sua nova carta de Super Trunfo!\n");

printf("\nA- Bahia \nB- Parana \nC- Amazonas \nD- Amapa" 
"\nE- Rio Grande do Sul \nF- Santa Catarina \nG- Sao Paulo \nH- Rio de Janeiro\n");
printf("\nSelecione o Estado: \n");
scanf(" %c", &estado2);

printf("Código da Carta (1 a 4): \n");
scanf("%s", &codigo_carta2);
                                                                                    
printf("Nome da Cidade: (Sem espaços) \n");
scanf("%s", &nome_cidade2);

printf("População: \n");
scanf("%d", &populacao2);

printf("Área (em km²): \n");
scanf("%f""m²", &area2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_tur2);

//Mensagem de retorno dos dados montados na carta
printf("\nCarta criada com sucesso!\n");

//Calcúlo dos outros desafios

densidade2 = (float) populacao2 / area2;
pib_percapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

//Esqueleto printf da carta 2

printf("\nCarta 2:\n");
printf("Estado: %s\n", nome_estado(estado2));
printf("Código: %c0%s\n", estado2, codigo_carta2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
printf("Densidade populacional: %.2f hab/km²\n", (float) densidade2);
printf("PIB per capita: %.2f reais\n", (float) pib_percapita2);


return 0;

}