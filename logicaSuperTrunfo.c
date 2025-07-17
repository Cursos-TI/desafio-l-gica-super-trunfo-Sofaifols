#include <stdio.h>
int main() {
    
 // VARIÁVEIS - CARTA 1
      char estado1; //de A a H
      char codigo1[20]; // aqui pode ser qualquer codigo para carta, mas sugeri na pergunta de cadastramento 
      char cidade1[50]; //pode usar ate 49 caracteres pq termina sempre com \0, um espaço reservado
      unsigned long int populacao1;
      int pontosturisticos1, opcao;
      float area1;
      float pib1;
      float densidadepopulacional1;
      float pibpercapita1;
      float superpoder1;
      

    
    

//VARIÁVEIS - CARTA 2
      char estado2; // de A a H
      char codigo2[20]; //aqui pode ser qualquer codigo 
      char cidade2[50]; //TIVE que definir o tanto de caracteres aqui
      unsigned long int populacao2;
      int pontosturisticos2;
      float area2;
      float pib2;
      float densidadepopulacional2;
      float pibpercapita2;
      float superpoder2;


//estou pensando em economizar espaço no codigo, colocando variaveis do mesmo tipo juntas, mas estava esperando o último exercicio....
    


//saudações para começar o desafio
          printf("\n --------- SUPER TRUNFO ---------\n");
          printf("\n ---- CADASTRAMENTO DAS CARTAS ----\n");
    
//CADASTRAMENTO - para o usuario inserir as infos da carta 1
          printf("\n º CADASTRO DA CARTA 1 º\n");

          printf(" \n- INFORME UMA LETRA PARA REPRESENTAR O ESTADO (DE A a H):\n");
          scanf(" %c", &estado1);

          printf("- INFORME O CÓDIGO DA CARTA (EX.: A01, 102, B01...):\n");
          scanf("%s", codigo1);

          printf("- INFORME O NOME DA CIDADE (SEM ESPAÇOS): \n");
          scanf("%s", cidade1);

          printf("- INFORME O NÚMERO DA POPULAÇÃO(SEM PONTOS OU VÍRGULAS):\n");
          scanf("%lu", &populacao1);

          printf("- INFORME A ÁREA DA CIDADE (EM KM², SEM PONTOS OU VÍRGULAS):\n");
          scanf("%f", &area1);

          printf(" - INFORME O PIB (SEM PONTOS OU VÍRGULAS):\n ");
          scanf("%f", &pib1);

          printf("- INFORME A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
          scanf("%d", &pontosturisticos1);

//CADASTRAMENTO PARA O USUÁRIO INSERIR OS DADOS DA CARTA 2

          printf("\n º CADASTRO DA CARTA 2 º\n");

          printf("\n - INFORME UMA LETRA PARA REPRESENTAR O ESTADO (DE A a H):\n");
          scanf(" %c", &estado2);

          printf("- INFORME O CÓDIGO DA CARTA (EX.: A01, 102, B01...):\n");
          scanf("%s", codigo2); 

          printf(" - INFORME O NOME DA CIDADE (SEM ESPAÇOS):\n");
          scanf("%s", cidade2);

          printf("- INFORME O NÚMERO DA POPULAÇÃO:\n");
          scanf("%lu", &populacao2);

          printf("- INFORME A ÁREA DA CIDADE (EM KM², SEM PONTOS OU VÍRGULAS):\n");
          scanf("%f", &area2);

          printf(" - INFORME O PIB (SEM PONTOS OU VÍRGULAS):\n ");
          scanf("%f", &pib2);

          printf("- INFORME A QUANTIDADE DE PONTOS TURÍSTICOS:\n");
          scanf("%d", &pontosturisticos2);

        densidadepopulacional1 = (float) populacao1 / area1;
        densidadepopulacional2 = (float) populacao2 / area2;
//usei o castingggggggggg
        pibpercapita1 = (float) pib1 / populacao1;
        pibpercapita2 = (float) pib2 / populacao2;
// adicionar a soma para depois calcular
        superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 +(1/ densidadepopulacional1); 
 // 1/densidade por conta que é o inverso da densidade que ta comparando
        superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1/ densidadepopulacional2);




           printf("\n ----- EXIBIÇÃO DOS DADOS CADASTRADOS PARA AS CARTAS -----\n");

//Exibição dos dados da carta 1:

           printf("\n -=- CARTA 1 -=- \n");

           printf("\n--> Estado: %c\n", estado1);

           printf("--> Código da carta: %s\n", codigo1);

           printf("--> Nome da Cidade: %s\n", cidade1); //aqui a mesma coisa, o especificador está apresentando erro

           printf("--> População: %lu \n", populacao1);

           printf("--> Área: %.2f km²\n", area1);

           printf("--> PIB: %.2f bilhões de reais\n", pib1);

           printf("--> Quantidade de pontos turísticos: %d\n", pontosturisticos1);

           printf("--> A densidade demográfica dessa cidade é:  %.2f habitantes por km² \n", densidadepopulacional1);

           printf("--> PIB PER CAPITA da cidade é:  %.2f R$ \n",pibpercapita1);

       
 // Exibição dos dados da carta 2:

          printf("\n -=- CARTA 2 -=-\n");

          printf("--> Estado: %c \n", estado2);

          printf("--> Código da carta: %s \n", codigo2);

          printf("--> Nome da cidade: %s \n", cidade2);

          printf("--> População: %lu \n", populacao2);

          printf("--> Área: %.2f km²\n", area2); //delimitei o tanto de casas com .2

          printf("--> PIB: %.2f bilhões de reais\n", pib2); //delimitei o tanto de casas com o .2

          printf("--> Quantidade de pontos turísticos: %d \n", pontosturisticos2);

          printf("--> A densidade demográfica desse estado é:  %.2f habitantes por km² \n", densidadepopulacional2);
    
          printf("--> PIB PER CAPITA da cidade é:  %.2fR$ \n",pibpercapita2);

      // menu interativo com switch!


   printf("\n ==========MENU DE COMPARAÇÃO==========");
      printf(" \n Escolha o atributo a ser comparado:\n");
        printf("1. População\n");
          printf("2. Área\n");
            printf("3. PIB\n");
              printf("4. Pontos turísticos\n");
                printf("5. Densidade demográfica\n");
                  printf("6. PIB per capita\n");
                    printf("7. Super poder (a soma de todos os atributos)\n");
                    scanf("%d", &opcao);


        printf("\n ----------RESULTADO DA COMPARAÇÃO----------\n");
            switch (opcao) {

              case 1:   //população
                printf("\nAtributo escolhido: POPULAÇÃO\n");
                printf(" %s: %lu habitantes.\n", cidade1, populacao1);
                printf(" %s: %lu habitantes.\n ", cidade2, populacao2);
                if (populacao1 > populacao2) {

                  printf(" CARTA VENCEDORA: %s \n", cidade1);

                } else if (populacao2 > populacao1) {

                  printf(" CARTA VENCEDORA: %s \n", cidade2);

                } else {
                  printf(" EMPATE! \n");
                }
                break;
              case 2:  //area
                printf(" \nAtributo escolhido: Área\n");
                printf(" %s: %.2f km²\n", cidade1, area1);
                printf(" %s: %.2f km²\n", cidade1, area2);
                if (area1 > area2) {
                  printf(" CARTA VENCEDORA: %s \n", cidade1);
                } else if (area2 > area1) {
                  printf(" CARTA VENCEDORA: %s \n", cidade2);
                }else {
                  printf(" EMPATE!\n");
                }
                break;
              case 3:  //PIB
              printf(" \n Atributo escolhido: PIB\n");
              printf(" %s: %.2f bilhões\n", cidade1, pib1);
              printf(" %s: %.2f bilhões\n", cidade2, pib2);
              if(pib1 > pib2) {
                printf(" CARTA VENCEDORA: %s \n", cidade1);
              } else if (pib2 > pib1){
                printf(" CARTA VENCEDORA: %s \n", cidade2);
              } else{
                printf("EMPATE!\n");
              }
              break;
            case 4: //pontos turisticos
            printf("\n Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d \n", cidade1, pontosturisticos1);
            printf("%s: %d", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
              printf(" CARTA VENCEDORA: %s \n", cidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
              printf(" CARTA VENCEDORA: %s \n", cidade2);
            }else {
              printf("EMPATE! \n");
            }
            break;
            case 5: //densidade demografica (regra invertida)
            printf("\nAtributo escolhido: densidade demográfica\n");
            printf("%s: %.3f habitantes por km²\n", cidade1, densidadepopulacional1);
            printf("%s: %.3f habitantes por km²\n", cidade2, densidadepopulacional2);
            if (densidadepopulacional1<densidadepopulacional2){
              printf(" CARTA VENCEDORA: %s (menor densidade)\n", cidade1);
            } else if (densidadepopulacional2 < densidadepopulacional1){
              printf(" CARTA VENCEDORA: %s (menor densidade)\n", cidade2);
            } else {
              printf("EMPATE!");
            }
            break;
            case 6: //pib percapita
            printf("\nAtributo escolhido: PIB per capita\n");
            printf("%s: %.3f R$\n", cidade1, pibpercapita1);
            printf("%s: %.3f R$\n", cidade2, pibpercapita2);
            if(pibpercapita1>pibpercapita2){
              printf(" CARTA VENCEDORA: %s \n", cidade1);
            } else if (pibpercapita2>pibpercapita1){
              printf(" CARTA VENCEDORA: %s \n", cidade2);
            }else{
              printf("EMPATE!\n");
            }
            break;
            case 7: //super poder(soma de todos os atributos)
            printf("\n Atributo escolhido: Super poder\n");
            printf(" %s: %.3f \n", cidade1, superpoder1);
            printf(" %s: %.3f \n", cidade2, superpoder2);
            if(superpoder1>superpoder2){
              printf(" CARTA VENCEDORA: %s \n", cidade1);

            }else if (superpoder2>superpoder1) {
              printf(" CARTA VENCEDORA: %s \n", cidade2);
            }else{
              printf("EMPATE!\n");
            }
            break;

          default:
            printf("opção inválida!!!!!!!!! tente novamente");
            break;





            }
            {
            }





    //COMPARAÇÃO DAS CARTAS USANDO IF ELSE, VOU TESTAR TAMBÉM FAZER UM SISTEMA DE PONTOS? TALVEZ COM INCREMENTOS, PRA DECIDIR QUAL CARTA GANHA NO FINAL.
    // os atributos que vou comparar vão ser: população, área e pontos turísticos!
     // defini o que tinha feito antes, usando if else e incremento como comparação, agora vou
     //usar o switch, acredito que fique mais fácil e limpo
      //int pontos1 = 0, pontos2 = 0; 
      //criei essas variavei e atribui valor 0 a elas, para usar no incremento 

    //    printf("\n------------ COMPARAÇÃO DAS CARTAS -----------\n");
    //    printf("\n OS ATRIBUTOS A SEREM COMPARADOS: POPULAÇÃO, ÁREA E PONTOS TURÍSTICOS. \n");

//usei os incrementos, funcionou!
//usei sistema de pontos, como pensado anteriormente mesmo, comparei 3 atributos.
    /*    printf("POPULAÇÃO:  ");
    
    if (populacao1 > populacao2) {
        printf("(%lu), Carta 1 ganhou!  \n", populacao1);
        pontos1++;
    } else {
        printf("(%lu), Carta 2 ganhou!  \n", populacao2);
        pontos2++;
    }
      printf("ÁREA:  ");

    if (area1 > area2) {
        printf("(%.3f), Carta 1 ganhou!\n", area1); 
        pontos1++; 
    } else {
        printf("(%.3f), Carta 2 ganhou!\n", area2);
        pontos2++;
    }
        printf("PONTOS TURÍSTICOS:  ");

    if (pontosturisticos1 > pontosturisticos2) {
        printf("(%d), Carta 1 ganhou!\n", pontosturisticos1);
        pontos1++;
    } else {
        printf("(%d), Carta 2 ganhou!\n", pontosturisticos2);
        pontos2++;
    }

    // fiz uma pontuação e exibi quem acumulou mais pontos      
        printf("\n--PONTUAÇÃO FINAL--\n");
        printf(" \nCarta 1- (%s): acumulou %d pontos! \n", cidade1, pontos1);
        printf(" \nCarta 2- (%s): acumulou %d pontos! \n", cidade2, pontos2);
//comparação da carta vencedora, usei tbem o if else aqui
      if (pontos1 > pontos2) {
        printf("\n====CARTA VENCEDORA====\n");
        printf(" \nCarta 1: %s, de código(%s), população de %lu habitantes, área de %.3f km² e com %d pontos turísticos! \n", cidade1, codigo1, populacao1, area1, pontosturisticos1);
      } else {
        printf("\n====CARTA VENCEDORA====\n");
        printf(" \nCarta 2: %s, de código (%s), população de %lu habitantes, área de %.3f km² e com %d pontos turísticos !\n ", cidade2, codigo2, populacao2, area2, pontosturisticos2);
      }
        mudou pra switch*/



      //aqui é como tinha feito a comparação antes, usando só operadores ralacionais
      /*printf("\n ============== COMPARAÇÃO DE CARTAS ==============\n");
      printf("\n -LEMBRETE: O = FALSO     1 = VERDADEIRO.\n");
      printf("População: A carta 1 venceu? [%d] \n", populacao1 > populacao2);
      printf("Área: A carta 1 venceu? [%d]\n",area1>area2);
      printf("PIB: A carta 1 venceu? [%d]\n", pib1>pib2);
      printf("Pontos turísticos: A carta 1 venceu? [%d]\n", pontosturisticos1>pontosturisticos2);
      printf("Densidade demográfica: A carta 1 venceu? [%d]\n", densidadepopulacional1<densidadepopulacional2);
      printf("PIB per capita: A carta 1 venceu? [%d]\n", pibpercapita1>pibpercapita2);
      printf("SUPER PODER: Carta 1 venceu? [%d] \n", superpoder1>superpoder2);
      */


    
      //printf("\n=======FIM=======\n");
     // printf("\n \n");

  // return 0;
}
