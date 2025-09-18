#include <stdio.h>

int main() {

// informação da carta 01
char estado1 = 'B';
char codigo1 [20] = "B01";
char cidade1 [20] = "Salvador";
unsigned long int populacao1 = 2123456;
float area1 = 7600.56;
float pib1 = 9123456.83;
int turismo1 = 56;  

// Informação da carta 02
char estado2 = 'C';
char codigo2 [20] = "C02";
char cidade2 [20] = "Fortaleza";
unsigned long int populacao2 = 5123456;
float area2 = 55000.12;
float pib2 = 8123456.93;
int turismo2 = 43;

// Informações de ambas as cartas 
float densidade1, densidade2;
float capita1, capita2;
float invertida1, invertida2;
float poder1, poder2;

// Calculo de densidade
densidade1 = (float) populacao1 / area1;
densidade2 = (float) populacao2 / area2;

// Calculo do pib per capito 
capita1 = (float) pib1 / populacao1;
capita2 = (float) pib2 / populacao2;

//Calculo da densidade invertida 
invertida1 = (float) densidade1 / 1;
invertida2 = (float) densidade2 / 1;

// Calculo do Poder 
poder1 = (float) populacao1 + area1 + pib1 + turismo1 + capita1 + invertida1;
poder2 = (float) populacao2 + area2 + pib2 + turismo2 + capita2 + invertida2; 
    
// Dodos da Carta 01
printf("Digite o Estado: \n");
scanf(" %c", &estado1);

printf("Digite o Código: \n");
scanf("%s", codigo1);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade1);

printf("Digite o Número da População: \n");
scanf("%lu", &populacao1);

printf("Digite a Área:: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Número de Pontos Turiscos: \n");
scanf("%d", &turismo1);

printf("A Densidade é: %.2f\n", densidade1);
printf("O PIB per Capita é: %.2f\n", capita1);

// Dodos da Carta 02
printf("\n\n");
printf("Digite o Estado: \n");
scanf(" %c", &estado2);

printf("Digite o Código: \n");
scanf("%s", codigo2);

printf("Digite o nome da Cidade: \n");
scanf("%s", cidade2);

printf("Digite o Número da População: \n");
scanf("%lu", &populacao2);

printf("Digite a Área:: \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Número de Pontos Turiscos: \n");
scanf("%d", &turismo2);

printf("A Densidade é: %.2f\n", densidade2); 
printf("O PIB per Capita é: %.2f\n", capita2);

// Primeira Carta
printf("\nCarta1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Turismo: %d\n", turismo1); 
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f Reais\n", capita1);
printf("Super Poder: %.2f\n", poder1);

// Segunda Carta
printf("\nCarta2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Turismo: %d\n", turismo2); 
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f Reais\n", capita2);
printf("Super Poder: %.2f\n", poder2);

// Comparação das Carta
printf("\nComparação das Cartas\n");

printf("Populacão: A carta 01 venceu a carta 02? %d\n", 
                (populacao1) > (populacao2));

printf("Área: A carta 01 venceu a carta 02? %d\n",
              (area1) > (area2));

printf("PIB: A carta 01 venceu a carta 02? %d\n",
               (pib1) > (pib2));

printf("Turismo: A carta 01 venceu a carta 02? %d\n",
              (turismo1) > (turismo2));

printf("Densidade Populacional: A carta 01 venceu a carta 02? %d\n",
             (densidade1) < (densidade2));

printf("PIB per Capita: A carta 01 venceu a carta 02? %d\n",
             (capita1) > (capita2));

printf("Super Poder: A carta 01 venceu a carta 02? %d\n",
             (poder1) > (poder2));
return 0;
}