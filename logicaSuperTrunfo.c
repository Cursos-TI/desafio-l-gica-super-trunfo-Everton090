#include <stdio.h> // Biblioteca padrão

int main (){
    
    // Variáveis da carta 1
    char estado1[15], nomecidade1[50];
    char codigo1;
    int populacao1;
    float area1, PIB1;  
    
    // Variáveis da carta 2
    char estado2, nomecidade2[50];
    char codigo2;
    int populacao2;
    float area2, PIB2;
    

    // Entrada de dados da carta 1
    printf("\n Carta 1 \n");              
    printf("Nome do estado: \n");
    scanf("%s", &estado1);                     
                                
    printf("Nome da cidade: \n");
    scanf("%s", &nomecidade1);

    printf("Qual seria o código da sua carta?\n");
    scanf("%s", &codigo1);

    printf("População?\n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    // Entrada de dados da carta 2
    printf("\nCarta 2 \n");
    printf("Nome do estado: \n");
    scanf("%s", &estado2);
    
    printf("Nome da cidade: \n");
    scanf("%s", &nomecidade2);

    printf("Qual seria o código da sua carta? \n");
    scanf("%s", &codigo2);

    printf("População? \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    // Comparação entre as populações
    if (populacao1 > populacao2) {
        printf("A carta 1 venceu! \n");
    } else if (populacao2 > populacao1) {
        printf("A carta 2 venceu! \n");
    } else {
        printf("As duas cartas empataram! \n");
    }
   
    return 0; // fim do programa
}










