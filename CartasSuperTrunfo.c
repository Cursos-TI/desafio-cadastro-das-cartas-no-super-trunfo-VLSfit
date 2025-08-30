#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Super Trunfo - Nível Novato

//Teste para puxar o nome do estado
const char* nome_estado(char letra) 
{
    switch (letra) {
        case 'A': return "Bahia";
        case 'B': return "Parana";
        case 'C': return "Amazonas";
        case 'D': return "Amapa";
        case 'E': return "Rio_Grande_do_Sul";
        case 'F': return "Santa_Catarina";
        case 'G': return "Sao_Paulo";
        case 'H': return "Rio_de_Janeiro";
    }
}

int main(){ 

//Primeira carta
char estado1;
char codigo_carta1[3];
char nome_cidade1[30];
int populacao1, pontos_tur1;
float area1, pib1;

//Segunda carta
char estado2;
char codigo_carta2[3];
char nome_cidade2[30];
int populacao2, pontos_tur2;
float area2, pib2;


//Início da primeira carta
printf("Desafio SuperTrunfo - Nível Novato\n\n");
printf("Insira os dados solicitados abaixo para criar sua carta de Super Trunfo!\n");

printf("\nA- Bahia \nB- Parana \nC- Amazonas \nD- Amapa" 
"\nE- Rio_Grande_do_Sul \nF- Santa_Catarina \nG- Sao_Paulo \nH- Rio_de_Janeiro\n");
printf("\nSelecione a letra correspondente ao Estado escolhido: \n");
scanf("%s", &estado1);

printf("Código da Carta (1 a 4): \n");
scanf("%s", &codigo_carta1);
                                                                                    
printf("Nome da Cidade: \n");
scanf("%s", &nome_cidade1);

printf("População: \n");
scanf("%d", &populacao1);

printf("Área (em km²): \n");
scanf("%fm²", &area1);

printf("PIB: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_tur1);

//Mensagem de retorno dos dados montados na carta
printf("\nCarta criada com sucesso!\n");

//Esqueleto printf da carta 1

printf("\nCarta 1:");
printf("\nEstado: %s\n", nome_estado(estado1));
printf("Código: %c0%s\n", estado1, codigo_carta1);
printf("Nome da Cidade: %s\n", nome_cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos_tur1);

//Início da segunda carta
printf("\n\nInsira os dados solicitados abaixo para criar sua nova carta de Super Trunfo!\n");

printf("\nA- Bahia \nB- Parana \nC- Amazonas \nD- Amapa" 
"\nE- Rio_Grande_do_Sul \nF- Santa_Catarina \nG- Sao_Paulo \nH- Rio_de_Janeiro\n");
printf("\nSelecione a letra correspondente ao Estado escolhido: \n");
scanf(" %c", &estado2);

printf("Código da Carta (1 a 4): \n");
scanf("%s", &codigo_carta2);
                                                                                    
printf("Nome da Cidade: \n");
scanf("%s", &nome_cidade2);

printf("População: \n");
scanf("%d", &populacao2);

printf("Área (em km²): \n");
scanf("%fm²", &area2);

printf("PIB: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos: \n");
scanf("%d", &pontos_tur2);

//Mensagem de retorno dos dados montados na carta
printf("\nCarta criada com sucesso!\n");

//Esqueleto printf da carta 2

printf("\nCarta 2:\n");
printf("Estado: %s\n", nome_estado(estado2));
printf("Código: %c0%s\n", estado2, codigo_carta2);
printf("Nome da Cidade: %s\n", nome_cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos_tur2);


return 0;
}