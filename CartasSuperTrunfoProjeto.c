
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
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;


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
    printf("Super Poder: %.2f\n", super_poder1);
    printf("\n"); 


// Definição das cartas Super Trunfo para cidades brasileiras
    char estado2[30] = "SP";
    int codigo_carta2 = '2'; 
    char nome_da_cidade2[30] = "São Paulo";
    int populacao2 = 12300000;
    float area2 = 1521.11; // em km²
    float pib2 = 699.21; //bilhões
    int pontos_turisticos2 = 25;
    float densidade_populacional2 = populacao2 / area2; //aqui usei a matematica simples onde voce pega a soma de populção e divide por area²
    float pib_per_capita2 = populacao2 / pib2; // e aqui voce faz o mesmo so divide população por pib
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    
    
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
    printf("Super Poder: %.2f\n", super_poder2);
    printf("\n");

    //Comparaçoes das cartas
    printf("\n===== Comparação entre as Cartas =====\n");
    if (populacao1 > populacao2){
      printf ("Carta 1 Venceu!(populacao1 > populacao2)\n");
    } else{
      printf("Carta 2 Venceu!(populacao2 > populacao1)\n");
    }
     if (area1 >area2 ){
      printf ("Carta 1 Venceu! (area1 > area2)\n");
    } else{
      printf("Carta 2 Venceu!(area2 > area1)\n");
    }
     if (pib1 > pib2 ){
      printf ("Carta 1 Venceu!(pib1 > pib2)\n");
    } else{
      printf("Carta 2 Venceu! (pib2 > pib2)\n");
    }
     if (pontos_turisticos1 > pontos_turisticos2 ){
      printf ("Carta 1 Venceu! (Mais pontos turisticos que carta 2)\n");
    } else{
      printf("Carta 2 Venceu!(Mais pontos turisticos que carta 1)\n");
    }
     if (densidade_populacional1 > densidade_populacional2 ){
      printf ("Carta 1 Venceu!(Densidade maior que carta 2)\n");
    } else{
      printf("Carta 2 Venceu!(Densidade maior que carta 1)\n");
    }
     if (pib_per_capita1 > pib_per_capita2){
      printf ("Carta 1 Venceu!(Pib per capita1 > Pib per capita2)\n");
    } else{
      printf("Carta 2 Venceu!(Pib per capita2 > Pib per capita1)\n");
    }
     if (super_poder1 > super_poder2 ){
      printf ("Carta 1 Venceu!(Super Poder 1 > Super Poder 2)\n");
    } else{
      printf("Carta 2 Venceu!(Super Poder 2 > Super Poder 1)\n");
    }
    
    

    // Fim do programa
  return 0;
}