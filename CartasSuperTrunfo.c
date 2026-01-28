
#include <stdio.h>

int main() {
     printf("=== Cartas Super Trunfo - Cidades Brasileiras ===\n\n"); 
  
  // Definição das cartas Super Trunfo para cidades brasileiras
    char estado1[30] = "RS";
    int codigo_carta1 = '1';
    char nome_da_cidade1[30] = "Porto Alegre";
    int populacao1 = 1400000;
    float area1 = 495.0; // em km²
    float pib1 = 104.74; //bilhões
    int pontos_turisticos1 = 18;
    float densidade_populacional1 = populacao1 / area1; //aqui usei a matematica simples onde voce pega a soma de populção e divide por area²
    float pib_per_capita1 = populacao1 / pib1; // e aqui voce faz o mesmo so divide população por pib
// Exibição dos dados da carta 1
    printf("Carta Super Trunfo - Cidade Brasileira\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %c\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %2.f hab/km²\n",densidade_populacional1);
    printf("Pib per Capita:  %.2f reais\n", pib_per_capita1);
    printf("\n"); 
// Definição das cartas Super Trunfo para cidades brasileiras
    char estado2[30] = "SP";
    int codigo_carta2 = '2'; 
    char nome_da_cidade2[30] = "São Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.11; // em km²
    float pib2 = 699.21; //bilhões
    int pontos_turisticos2 = 25;
    //No Nivel aventureiro do desafio adicionamos a densidade e o pib per capita, aonde aprendemos a fazer o calculo para encontrar o resultado.
    float densidade_populacional2 = populacao2 / area2; //aqui usei a matematica simples onde voce pega a soma de populção e divide por area²
    float pib_per_capita2 = populacao2 / pib2; // e aqui voce faz o mesmo so divide população por pib
    
    
    // Exibição dos dados da carta 2
    printf("Carta Super Trunfo - Cidade Brasileira\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %c\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %2.f hab/km²\n",densidade_populacional2);
    printf("Pib per Capita:  %.2f reais\n", pib_per_capita2);


    // Fim do programa
  return 0;
}