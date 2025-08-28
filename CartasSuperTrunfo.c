#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
char estado1 [20] = 'B';
char codigo1 [20] = "B01";
char cidade1 [20] = "Salvador";
int população1 = 2.000000;
float area1 = 1653.73;
float pib1 = 966.83;
int turismo1 = 56;

char estado2 [20] = 'C';
char codigo2 [20] = "C02";
char cidade2 [20] = "Fortaleza";
int população2 = 5.000000;
float area2 = 5000.12;
float pib2 = 800.65;
int turismo2 = 43;
    
printf("Digite o Estado: \n");
scanf("%c", &estado1);

printf("Digite o Código: \n");
scanf("%s", &codigo1);

printf("Digite o nome da Cidade: \n");
scanf("%s", &cidade1);

printf("Digite o Número da População: \n");
scanf("%d", &população1);

printf("Digite a Área:: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turiscos: \n");
scanf("%d", &turismo1);

//Segunda Carta
printf("Digite o Estado: \n");
scanf("%c", &estado2);

printf("Digite o Código: \n");
scanf("%s", &codigo2);

printf("Digite o nome da Cidade: \n");
scanf("%s", &cidade2);

printf("Digite o Número da População: \n");
scanf("%d", &população2);

printf("Digite a Área:: \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turiscos: \n");
scanf("%d", &turismo2);



}
