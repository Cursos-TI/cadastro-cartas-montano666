#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // Área para definição das variáveis para armazenar as propriedades das cidades
 char estado[20];
 char cdcarta[4];
 char nomcidad[30];
 int populac;
 float area;
 float pib;
 int numpontturis;

// Área para entrada de dados

    printf("Digite sua estado: ");
    scanf(" %s", estado);

    printf("Digite o Codigo da Carta:  ");
    scanf(" %s", cdcarta);

    printf("Digite o nome da Cidade: ");
    scanf(" %s", nomcidad);

    printf("Digite quantidade de População na cidade: ");
    scanf(" %d" , &populac);

    printf("Digite o tamanho da cidade : ");
    scanf(" %f", &area);

    printf("Digite o PIB da cidade : ");
    scanf(" %f", &pib);
    
    printf("Digite o Numero de Pontos turisticos da cidade : ");
    scanf(" %d", &numpontturis);

// Área para exibição dos dados da cidade
    printf("Abaixo as informações do cartão informado\n");
    printf("O estado é : %s\n", estado);
    printf("O Codigo da carta é  %s\n", cdcarta);
    printf("O nome da cidade é : %s\n", nomcidad);
    printf("A Quantidade da população da cidade é : %d\n", populac);
    printf("O tamanho da cidade em km : %f\n", area);
    printf("O PIB da cidade é : %f\n", pib);
    printf("O número de pontos turisticos é : %d\n", numpontturis);


return 0;
} 
