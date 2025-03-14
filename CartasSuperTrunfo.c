#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Carlos Mateus

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.


char estado1[5];
char codigoDaCarta1[10]; 
char cidade1[50];
double populacao1;
float area1;
float densidade1 = populacao1 / area1;
float pib1;
int turismo1;

char estado2[5];
char codigoDaCarta2[3]; 
char nomeDaCidade2[25];
float populacao2;
float area2;
float densidade2 = populacao2 / area2;
float pib2;
int turismo2;



    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Dados da carta 01
//Dados da carta 01
printf("Digite a letra do estado:\n");
scanf("%s", &estado1);

printf("Digite o código da primeira carta:\n");
scanf("%s", &codigoDaCarta1);

printf("Digite o nome da cidade:\n");
scanf("%s", &cidade1);

printf("Digite a quantidade da população:\n");
scanf("%f", &populacao1);

printf("Digite a area:\n");
scanf("%f", &area1);


printf("Digite o PIB do estado:\n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turismo1);


printf("Carta 01:\n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigoDaCarta1);
printf("Nome da cidade: %s \n", cidade1);
printf("População: %f \n", populacao1);
printf("Área: %f Km²\n", area1);
printf("Densidade populacional: %.2f\n", densidade1);
printf("PIB: %f Bilhoes de reais \n", pib1);
printf("Número de pontos Turisticos: %d \n\n", turismo1);

    //Dados carta 02


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

printf("Digite a letra do estado:\n");
scanf("%s", &estado2);

printf("Digite o código da segunda carta:\n");
scanf("%s", &codigoDaCarta2);

printf("Digite o nome da cidade:\n");
scanf("%s", &nomeDaCidade2);

printf("Digite a quantidade da população:\n");
scanf("%d", &populacao2);

printf("Digite a area:\n");
scanf("%f", &area2);

printf("Digite o PIB do estado:\n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &turismo2);


printf("Carta 02:\n");
printf("Estado: %s \n", estado2);
printf("Código: %s \n", codigoDaCarta2);
printf("Nome da cidade: %s \n", nomeDaCidade2);
printf("População: %d \n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("Densidade populacional: %.2f\n", densidade2);
printf("PIB: %.2f Bilhoes de reais \n", pib2);
printf("Número de pontos Turisticos: %d \n", turismo2);




return 0;


}
}
