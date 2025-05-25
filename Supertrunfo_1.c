#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char C1_estado, C1_cidade[50], C1_codigo[50];
    char C2_estado, C2_cidade[50], C2_codigo[50];

    int C1_habitantes, C1_turismo;
    int C2_habitantes, C2_turismo;

    float C1_area, C1_PIB;
    float C2_area, C2_PIB;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro da Primeira Carta:

        printf("Letra do estado:");
        scanf("%c", &C1_estado);

        printf("Código da carta:");
        scanf("%s", &C1_codigo);

        printf("Nome da cidade:");
        scanf("%s", &C1_cidade);

        printf("Número populacional:");
        scanf("%d", &C1_habitantes);

        printf("Tamanho da área:");
        scanf("%f", &C1_area);

        printf("Valor do PIB:");
        scanf("%f", &C1_PIB);

        printf("Pontos turisticos existentes:");
        scanf("%d", &C1_turismo);


    // Informações da 2º Carta
    printf("\nPreencha as informações para 2° Carta:\n");

    // Limpeza do buffer, para scanf não ler como inicio o newline "\n".
        getchar();

        printf("Letra do estado:");
        scanf("%c", &C2_estado);

        printf("Código da carta:");
        scanf("%s", &C2_codigo);
    
        printf("Cidade da carta:");
        scanf("%s", &C2_cidade);

        printf("Número populacional:");
        scanf("%d", &C2_habitantes);

        printf("Tamanho da área:");
        scanf("%f", &C2_area);

        printf("Valor do PIB:");
        scanf("%f", &C2_PIB);

        printf("Pontos turisticos existentes:");
        scanf("%d", &C2_turismo);

    // Calculo Per Capita e Densional.

    float C1_densidade = (float) C1_habitantes / C1_area;
    float C1_per_capita = (float) C1_PIB / C1_habitantes;
    
    float C2_per_capita = (float) C2_PIB / C2_habitantes;
    float C2_densidade = (float) C2_habitantes / C2_area; 


    // Para criar um espaço entre as duas formatações de saida.
    printf("\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // SAIDA/OUTPUT CARTA 1.

        printf("Carta 1:\n");

        printf("Estado: %c\n", C1_estado);

        printf("Código: %s\n", C1_codigo);
 
        printf("Cidade: %s\n", C1_cidade);

        printf("População: %d\n", C1_habitantes);

        printf("Área: %.2f Km²\n", C1_area);

        printf("PIB: %.4f bilhões de reais\n", C1_PIB); 

        printf("Número de pontos turisticos: %d\n", C1_turismo);

        printf("Densidade Populacional: %f\n", C1_densidade);

        printf("PIB per capita: %f\n", C1_per_capita);

    // Para criar um espaço entre as duas formatações de saida.
    printf("\n");

    // SAIDA/OUTPUT CARTA 2.

        printf("Carta 2:\n");

        printf("Estado: %c\n", C2_estado);

        printf("Código: %s\n", C2_codigo);
    
        printf("Cidade: %s\n", C2_cidade);

        printf("População: %d\n", C2_habitantes);

        printf("Área: %.2f Km²\n", C2_area);

        printf("PIB: %.2f bilhões de reais\n", C2_PIB);

        printf("Número de pontos turisticos: %d\n", C2_turismo);

        printf("Densidade Populacional: %f\n", C2_densidade);
                
        printf("PIB per capita: %f\n", C2_per_capita);


    return 0;
}