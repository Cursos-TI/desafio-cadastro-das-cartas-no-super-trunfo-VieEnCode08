#include <stdio.h>

    int main() {
    
        // Adicionada a variavel para o jogador escolher
        int atributo1;
        int atributo2;
        float valor1, valor2;
        int jogador;

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
        float area2 = 5500.12;
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

            // Introdução do jogo
            printf ("Bem-Vindo ao Jogo Super Trunfo!!\n\n");
            printf ("1- Iniciar Jogo\n");
            printf ("2- Regras\n");
            printf ("3- Sair do Jogo\n");
            printf ("Escolha a Opção: ");
            scanf ("%d", &jogador);

            switch (jogador) {
            case 1:
                printf ("\nIniciando Jogo...");
                break;
            case 2:
                printf ("\nGanha aquele que tiver a carta com maior atributo");
                printf ("\nExceto densidade populacional, vence a carta com o menor atributo");
                break;
            case 3:
                printf ("Saindo do Jogo...");
                break;
            default:
                printf ("Opção Inválida!");
                break;
            }
        
            // Dodos da Carta 01
            printf ("\n\n**Digite os Dados da Carta 01**\n\n");
            printf ("Digite o Estado: \n");
            scanf (" %c", &estado1);

            printf ("Digite o Código: \n");
            scanf ("%s", codigo1);

            printf ("Digite o nome da Cidade: \n");
            scanf ("%s", cidade1);

            printf ("Digite o Número da População: \n");
            scanf ("%lu", &populacao1);

            printf ("Digite a Área:: \n");
            scanf ("%f", &area1);

            printf ("Digite o PIB: \n");
            scanf ("%f", &pib1);

            printf ("Número de Pontos Turiscos: \n");
            scanf ("%d", &turismo1);

            printf ("A Densidade é: %.2f\n", densidade1);
            printf ("O PIB per Capita é: %.2f\n", capita1);

            // Dodos da Carta 02
            printf ("\n\n**Digite os Dados da Carta 02**\n\n");
            printf ("Digite o Estado: \n");
            scanf (" %c", &estado2);

            printf ("Digite o Código: \n");
            scanf ("%s", codigo2);

            printf ("Digite o nome da Cidade: \n");
            scanf ("%s", cidade2);

            printf ("Digite o Número da População: \n");
            scanf ("%lu", &populacao2);

            printf ("Digite a Área:: \n");
            scanf ("%f", &area2);

            printf ("Digite o PIB: \n");
            scanf ("%f", &pib2);

            printf ("Número de Pontos Turiscos: \n");
            scanf ("%d", &turismo2);

            printf ("A Densidade é: %.2f\n", densidade2); 
            printf ("O PIB per Capita é: %.2f\n", capita2);

            // Primeira Carta
            printf ("\n\n**Aqui fica visivel os dados das duas cartas**\n");
            printf ("\n**Carta1**\n");
            printf ("Estado: %c\n", estado1);
            printf ("Código: %s\n", codigo1);
            printf ("Cidade: %s\n", cidade1);
            printf ("População: %lu\n", populacao1);
            printf ("Área: %.2f km²\n", area1);
            printf ("PIB: %.2f Bilhões de Reais\n", pib1);
            printf ("Turismo: %d\n", turismo1); 
            printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
            printf ("PIB per Capita: %.2f Reais\n", capita1);
            printf ("Super Poder: %.2f\n", poder1);
        
            // Segunda Carta
            printf ("\n**Carta2**\n");
            printf ("Estado: %c\n", estado2);
            printf ("Código: %s\n", codigo2);
            printf ("Cidade: %s\n", cidade2);
            printf ("População: %lu\n", populacao2);
            printf ("Área: %.2f km²\n", area2);
            printf ("PIB: %.2f Bilhões de Reais\n", pib2);
            printf ("Turismo: %d\n", turismo2); 
            printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
            printf ("PIB per Capita: %.2f Reais\n", capita2);
            printf ("Super Poder: %.2f\n", poder2);

            // Atributos das Cartas
            printf ("\nEscolha do Primeiro Atributos:\n\n");
            printf ("Atributos 01:");
            printf ("\n1- População\n");
            printf ("2- Área\n");
            printf ("3- PIB\n");
            printf ("4- Ponto Turistico\n");
            printf ("5- Densidade Populacional\n");
            printf ("Escoha um atributo para fazer a comparação: ");
            scanf ("%d", &atributo1);

            switch (atributo1) {
                
                case 1:
                    printf ("População\n");
                    printf ("Carta 01: %lu\n", populacao1);
                    printf ("Carta 02: %lu\n", populacao2);

                    populacao1 > populacao2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor1 = (float) populacao1 + populacao2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    
                    break;
                case 2: 
                    printf ("Área\n");
                    printf ("Carta 01: %.2f km²\n", area1);
                    printf ("Carta 02: %.2f km²\n", area2);

                    area1 > area2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor1 = (float) area1 + area2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    break;
                case 3:
                    printf ("PIB\n");
                    printf ("Carta 01: %.2f Bilhões de Reais\n", pib1);
                    printf ("Carta 02: %.2f Bilhões de Reais\n", pib2);

                    pib1 > pib2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");
                    
                    valor1 = (float) pib1 + pib2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    break;
                case 4: 
                    printf ("Ponto Turistico\n");
                    printf ("Carta 01: %d\n", turismo1);
                    printf ("Carta 02: %d\n", turismo2); 

                    turismo1 > turismo2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor1 = (float) turismo1 + turismo2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    break;
                case 5:
                    printf ("\nDensidade Populacional\n");
                    printf ("Carta 01: %.2f hab/km²\n", densidade1);
                    printf ("Carta 02: %.2f hab/km²\n", densidade2);

                    densidade1 < densidade2 ? printf ("Carta 01 é menor que carta 02\n\n") : printf ("Carta 02 é menor que carta 01\n\n");

                    valor1 = (float) densidade1 + densidade2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    break;
                default:
                    printf ("Opção Inválida\n");
                    break;
                }
            printf ("\nEscolha do Segundo Atributo:\n\n");
            printf ("Atributos 02:");
            printf ("\n1- População\n");
            printf ("2- Área\n");
            printf ("3- PIB\n");
            printf ("4- Ponto Turistico\n");
            printf ("5- Densidade Populacional\n");
            printf ("Escoha um atributo para fazer a comparação: ");
            scanf ("%d", &atributo2);

                if (atributo1 == atributo2) {
                    printf ("Você escolheu o mesmo atributo\n");
                } else {
                    switch (atributo2) {
                case 1:
                    printf ("\nBrasil\n");
                    printf ("População\n");
                    printf ("Carta 01: %lu\n", populacao1);
                    printf ("Carta 02: %lu\n", populacao2);

                    populacao1 > populacao2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor2 = (float) populacao1 + populacao2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    printf ("Soma das cartas: %.2f\n", valor2);
                    
                    if (valor1 > valor2) {
                        if (valor1 == valor2 ) {
                            printf ("O jogo empatou!!\n");
                        }
                        printf ("O atributo 01 venceu!!\n");
                    } else {
                        printf ("O atributo 02 venceu!!\n");
                    }
                    break;
                case 2: 
                    printf ("\nBrasil\n");
                    printf ("Área\n");
                    printf ("Carta 01: %.2f km²\n", area1);
                    printf ("Carta 02: %.2f km²\n", area2);

                    area1 > area2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor2 = (float) area1 + area2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    printf ("Soma das cartas: %.2f\n", valor2);
                    
                    if (valor1 > valor2) {
                        if (valor1 == valor2 ) {
                            printf ("O jogo empatou!!\n");
                        }
                        printf ("O atributo 01 venceu!!\n");
                    } else {
                        printf ("O atributo 02 venceu!!\n");
                    }
                    break;
                case 3:
                    printf ("\nBrasil\n");
                    printf ("PIB\n");
                    printf ("Carta 01: %.2f Bilhões de Reais\n", pib1);
                    printf ("Carta 02: %.2f Bilhões de Reais\n", pib2);

                    pib1 > pib2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor2 = (float) pib1 + pib2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    printf ("Soma das cartas: %.2f\n", valor2);
                    
                    if (valor1 > valor2) {
                        if (valor1 == valor2 ) {
                            printf ("O jogo empatou!!\n");
                        }
                        printf ("O atributo 01 venceu!!\n");
                    } else {
                        printf ("O atributo 02 venceu!!\n");
                    }
                    break;
                case 4: 
                    printf ("\nBrasil\n");
                    printf ("Ponto Turistico\n");
                    printf ("Carta 01: %d\n", turismo1);
                    printf ("Carta 02: %d\n", turismo2); 

                    turismo1 > turismo2 ? printf ("Carta 01 é maior que carta 02\n\n") : printf ("Carta 02 é maior que carta 01\n\n");

                    valor2 = (float) turismo1 + turismo2;

                    printf ("Soma das cartas: %.2f\n", valor1);
                    printf ("Soma das cartas: %.2f\n", valor2);
                    
                    if (valor1 > valor2) {
                        if (valor1 == valor2 ) {
                            printf ("O jogo empatou!!\n");
                        }
                        printf ("O atributo 01 venceu!!\n");
                    } else {
                        printf ("O atributo 02 venceu!!\n");
                    }
                    break;
                case 5:
                    printf ("\nBrasil\n");
                    printf ("Densidade Populacional\n");
                    printf ("Carta 01: %.2f hab/km²\n", densidade1);
                    printf ("Carta 02: %.2f hab/km²\n", densidade2);

                    densidade1 < densidade2 ? printf ("Carta 01 é menor que carta 02\n\n") : printf ("Carta 02 é menor que carta 1\n\n");

                    valor2 = (float) densidade1 + densidade2;
                    
                    printf ("Soma das cartas: %.2f\n", valor1);
                    printf ("Soma das cartas: %.2f\n", valor2);
                    
                    if (valor1 > valor2) {
                        if (valor1 == valor2 ) {
                            printf ("O jogo empatou!!\n");
                        }
                        printf ("O atributo 01 venceu!!\n");
                    } else {
                        printf ("O atributo 02 venceu!!\n");
                    }
                    break;
                default:
                    printf ("Opção Inválida\n");
                    break;
                    }
                }
        return 0;
    }