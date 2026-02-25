#include <stdio.h>
#include <stdlib.h>

int main(){

    //Explicando o jogo para o usuário
    printf("***Bem-vindo ao jogo de comparação de estados!***\n");
    printf("Neste jogo, você irá comparar dois estados com base em alguns atributos.\n");
    printf("Você irá fornecer informações sobre dois estados, como população, área, PIB, número de pontos turísticos, densidade populacional e PIB per capita.\n");
    printf("Em seguida, você escolherá dois atributos para comparação e o programa determinará qual dos estados é superior em cada atributo.\n");
    printf("Vamos começar!\n\n");

    //Variáveis da carta 1
    char estado1[50],nomedacidade1[50],codigo1[50];
    unsigned int populacao1;
    float area1,pib1,densidadepopulacional1,pibpercapita1;
    int pontosturisticos1,atributo1;

    //Variáveis da carta 2
    char estado2[50],nomedacidade2[50],codigo2[50];
    unsigned int populacao2;
    float area2,pib2,densidadepopulacional2,pibpercapita2;
    int pontosturisticos2,atributo2;


    //Recebendo os dados da carta 1

    printf("Cadastro da Carta 1\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]",estado1);

    printf("Digite o nome da cidade:");
    scanf(" %[^\n]",nomedacidade1);

    printf("Digite o código do da carta: ");
    scanf(" %[^\n]",codigo1);

    printf("Digite a população : ");
    scanf("%u",&populacao1);

    printf("Digite a Área em Km² : ");
    scanf("%f",&area1);

    printf("Digite o PIB : ");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turísticos : ");
    scanf("%i",&pontosturisticos1);
    
    densidadepopulacional1 = populacao1/area1;
    pibpercapita1 = pib1/populacao1;

    //Recebendo os dados da carta 2

    printf("Cadastro da Carta 2\n");

    printf("Digite o estado: ");
    scanf(" %[^\n]",estado2);

    printf("Digite o nome da cidade :");
    scanf(" %[^\n]",nomedacidade2);

    printf("Digite o código do da cidade: ");
    scanf(" %[^\n]",codigo2);

    printf("Digite a população : ");
    scanf("%u",&populacao2);

    printf("Digite a Área em Km² : ");
    scanf("%f",&area2);

    printf("Digite o PIB : ");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turísticos : ");
    scanf("%i",&pontosturisticos2);
    
    densidadepopulacional2 = populacao2/area2;
    pibpercapita2 = pib2/populacao2;

    //Menu interarivo
    //Primeiro Atributo
    printf("Escolha o primeiro atributo para comparação : \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pib Per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%i",&atributo1);
    
    //Segundo Atributo
    printf("Escolha o segundo atributo para comparação : \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Pib Per Capita\n");
    printf("Digite a opção (1-6): ");
    scanf("%i",&atributo2);

   if(atributo2 == atributo1){
        printf("Você não pode escolher o mesmo atributo, selecione outro atributo\n");}
        

        switch (atributo1)
        {
        case 1:
            if(populacao1 > populacao2){printf("População da cidade : %s(%u) venceu!\n",nomedacidade1,populacao1);}
            else if(populacao1 < populacao2){printf("População da cidade : %s(%lu) venceu!\n",nomedacidade2,populacao2);}
            else{printf("A população empatou!\n");}
            break;

        case 2:
            if(area1 > area2){printf("Área em Km² da cidade : %s(%.2f) venceu!\n",nomedacidade1,area1);}
            else if(area1 < area2){printf("Área em Km² da cidade : %s(%.2f) venceu!\n",nomedacidade2,area2);}
            else{printf("Área em Km² empatou!\n");}
            break;
        
        case 3:
            if(pib1 > pib2){printf("PIB da cidade : %s(%.2f) venceu!\n",nomedacidade1,pib1);}
            else if(pib1 < pib2){printf("PIB da cidade : %s(%.2f) venceu!\n",nomedacidade2,pib2);}
            else{printf("PIB empatou!\n");}
            break;

        case 4:
            if(pontosturisticos1 > pontosturisticos2){printf("Pontos turísticos da cidade : %s(%i) venceu!\n",nomedacidade1,pontosturisticos1);}
            else if(pontosturisticos1 < pontosturisticos2){printf("Pontos turísticos da cidade : %s(%i) venceu!\n",nomedacidade2,pontosturisticos2);}
            else{printf("Pontos turísticos empatou!\n");}
            break;

        case 5:
            if(densidadepopulacional1 < densidadepopulacional2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade1,densidadepopulacional1);}
            else if(densidadepopulacional1 > densidadepopulacional2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade2,densidadepopulacional2);}
            else{printf("A Densidade Demográfica empatou!\n");}
            break;

        case 6:
            if(pibpercapita1 > pibpercapita2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade1,pibpercapita1);}
            else if(pibpercapita1 < pibpercapita2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade2,pibpercapita2);}
            else{printf("Pib Per Capita empatou!\n");}
            break;

        default:{printf("Digito Inválido!\n");}
            break;
        }

        switch (atributo2)
        {
        case 1:
            if(populacao1 > populacao2){printf("População da cidade : %s(%u) venceu!\n",nomedacidade1,populacao1);}
            else if(populacao1 < populacao2){printf("População da cidade : %s(%lu) venceu!\n",nomedacidade2,populacao2);}
            else{printf("A população empatou!\n");}
            break;

        case 2:
            if(area1 > area2){printf("Área em Km² da cidade : %s(%.2f) venceu!\n",nomedacidade1,area1);}
            else if(area1 < area2){printf("Área em Km² da cidade : %s(%.2f) venceu!\n",nomedacidade2,area2);}
            else{printf("Área em Km² empatou!\n");}
            break;
        
        case 3:
            if(pib1 > pib2){printf("PIB da cidade : %s(%.2f) venceu!\n",nomedacidade1,pib1);}
            else if(pib1 < pib2){printf("PIB da cidade : %s(%.2f) venceu!\n",nomedacidade2,pib2);}
            else{printf("PIB empatou!\n");}
            break;

        case 4:
            if(pontosturisticos1 > pontosturisticos2){printf("Pontos turísticos da cidade : %s(%i) venceu!\n",nomedacidade1,pontosturisticos1);}
            else if(pontosturisticos1 < pontosturisticos2){printf("Pontos turísticos da cidade : %s(%i) venceu!\n",nomedacidade2,pontosturisticos2);}
            else{printf("Pontos turísticos empatou!\n");}
            break;

        case 5:
            if(densidadepopulacional1 < densidadepopulacional2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade1,densidadepopulacional1);}
            else if(densidadepopulacional1 > densidadepopulacional2){printf("Densidade Demográfica da cidade : %s(%.2f) venceu!\n",nomedacidade2,densidadepopulacional2);}
            else{printf("A Densidade Demográfica empatou!\n");}
            break;

        case 6:
            if(pibpercapita1 > pibpercapita2){printf("Pib Per Capita da cidade : %s(%.2f) venceu!\n",nomedacidade1,pibpercapita1);}
            else if(pibpercapita1 < pibpercapita2){printf("Pib Per Capita da cidade : %s(%.2f) venceu!\n",nomedacidade2,pibpercapita2);}
            else{printf("Pib Per Capita empatou!\n");}
            break;

        default:{printf("Digito Inválido!\n");}
            break;
        }
return 0;
} 

//Fim do Jogo!!