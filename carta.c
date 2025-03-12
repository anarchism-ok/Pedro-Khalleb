#include <stdio.h>

int main(){

char estado[20];
char cidade[20];
char carta[10];
int pessoas;
float area;
float pib;
int local;
float densidade;
float capita;
float poder;

char estado2[20];
char cidade2[20];
char carta2[10];
int pessoas2;
float area2;
float pib2;
int local2;
float densidade2;
float capita2;
float poder2;


int resultado;
int resultado2;

printf("**** carta 1 ****\n" );

printf("digite o estado:" );
scanf("%s", &estado );

printf("digite o cidade:" );
scanf("%s", &cidade );

printf("digite o numero da carta:" );
scanf("%s", &carta );

printf("população:" );
scanf("%d", &pessoas );

printf("área:" );
scanf("%f", &area );

printf("PIB:" );
scanf("%f", &pib );

printf("Número de Pontos Turísticos:" );
scanf("%d", &local );

densidade = (float)(pessoas / area );
capita = (float)(pib / pessoas );
poder = (float) (pessoas + area + local + capita + densidade + pib );

printf("*****Resultado da carta 1****** \n");
printf("numero da carta:%s\n", carta );
printf("estado:%s\n", estado );
printf("cidade:%s\n", cidade );
printf("população:%d\n", pessoas );
printf("área:%.2f\n", area );
printf("PIB:%.2f\n", pib );
printf("Número de Pontos Turísticos:%d\n", local );
printf("densidade populacional:%.2f\n", densidade );
printf("PIB per cabita:%.2f\n", capita );
printf("Poder da carta 1:%.2f\n", poder );

printf("**** carta 2 ****\n" );

printf("digite o estado:" );
scanf("%s", &estado2 );

printf("digite o cidade:" );
scanf("%s", &cidade2 );

printf("digite o numero da carta:" );
scanf("%s", &carta2 );

printf("população:" );
scanf("%d", &pessoas2 );

printf("área:" );
scanf("%f", &area2 );

printf("PIB:" );
scanf("%f", &pib2 );

printf("Número de Pontos Turísticos:" );
scanf("%d", &local2 );

densidade2 = (float)(pessoas2 / area2 );
capita2 = (float)(pib2 / pessoas2 );
poder2 = (float) (pessoas2 + area2 + local2 + capita2 + densidade2 + pib2 );

printf("******Resultado da carta 2****** \n");
printf("numero da carta:%s\n", carta2 );
printf("estado:%s\n", estado2 );
printf("cidade:%s\n", cidade2 );
printf("população:%d\n", pessoas2 );
printf("área:%.2f\n", area2 );
printf("PIB:%.2f\n", pib2 );
printf("Número de Pontos Turísticos:%d\n", local2 );
printf("densidade populacional:%.2f\n", densidade2 );
printf("PIB per cabita:%.2f\n", capita2 );
printf("poder da carta 2:%.2f\n", poder2 );

resultado = poder;
resultado2 = poder2;

printf("*****Comparação de Cartas*****\n");
printf ("população a carta 1 venceu:%d\n" , pessoas > pessoas2 );
printf("area a carta 1 venceu:%f\n", area > area2 );
printf("O Pib da carta é maior:%f\n", pib > pib2 );
printf("A carta 1 tem mais pontos turísticos:%d\n", local > local2 );
printf("A densidade populacional da carta 1 é maior:%f\n", densidade > densidade2 );
printf("O PIB per cabita da carta 1 é maior:%f\n ", capita > capita2 );
printf("O Poder da carta 1 é maior:%f" , resultado > resultado2 );





return 0; 

}