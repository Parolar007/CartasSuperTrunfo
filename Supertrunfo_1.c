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

        printf("Letra do estado: ");
        scanf("%c", &C1_estado);

        printf("Código da carta: ");
        scanf("%s", &C1_codigo);

        printf("Nome da cidade: ");
        scanf("%s", &C1_cidade);

        printf("Número populacional: ");
        scanf("%d", &C1_habitantes);

        printf("Tamanho da área: ");
        scanf("%f", &C1_area);

        printf("Valor do PIB: ");
        scanf("%f", &C1_PIB);

        printf("Pontos turisticos existentes: ");
        scanf("%d", &C1_turismo);

    // Informações da 2º Carta
        printf("\nPreencha as informações para 2° Carta:\n");

    // Limpeza do buffer, para scanf não ler como inicio o newline "\n".
        getchar();

        printf("Letra do estado: ");
        scanf("%c", &C2_estado);

        printf("Código da carta: ");
        scanf("%s", &C2_codigo);
    
        printf("Cidade da carta: ");
        scanf("%s", &C2_cidade);

        printf("Número populacional: ");
        scanf("%d", &C2_habitantes);

        printf("Tamanho da área: ");
        scanf("%f", &C2_area);

        printf("Valor do PIB: ");
        scanf("%f", &C2_PIB);

        printf("Pontos turisticos existentes: ");
        scanf("%d", &C2_turismo);

        printf("\n");

    // Calculo Per Capita e Densional.

       float C1_densidade = (float) C1_habitantes / C1_area;
       float C1_per_capita = (float) C1_PIB / C1_habitantes;
    
       float C2_per_capita = (float) C2_PIB / C2_habitantes;
       float C2_densidade = (float) C2_habitantes / C2_area;

    // Somando todos os atributos numericos (float and int).

       float C1_soma = (float) (C1_habitantes + C1_turismo) + (C1_area + C1_PIB);
       float C1_SomaResultado = (C1_densidade + C1_per_capita) + C1_soma;

       float C2_soma = (float) (C2_habitantes + C2_turismo) + (C2_area + C2_PIB);
       float C2_SomaResultado = (C2_densidade + C2_per_capita) + C2_soma;

    // Comparação entre as cartas.
        
       int ComparaSuperTrunfo1 = C1_SomaResultado > C2_SomaResultado;
       int ComparaSuperTrunfo2 = C2_SomaResultado > C1_SomaResultado;
       int ResultadoSuperTrunfo = ComparaSuperTrunfo1 >= ComparaSuperTrunfo2;

       int ComparaPerCapita1 = C1_per_capita > C2_per_capita;
       int ComparaPerCapita2 = C2_per_capita > C1_per_capita;
       int ResultadoPerCapita = ComparaPerCapita1 >= ComparaPerCapita2;
       
       int ComparaDesidade1 = C1_densidade > C2_densidade;
       int ComparaDesidade2 = C2_densidade > C1_densidade;
       int ResultadoDensidade = ComparaDesidade1 >= ComparaDesidade2;

       int ComparaTurismo1_Turismo2 = C1_turismo > C2_turismo;
       int ComparaTurismo2_Turismo1 = C2_turismo > C1_turismo;
       int ResultadoTurismo = ComparaTurismo1_Turismo2 >= ComparaTurismo2_Turismo1;
       
       int ComparaAra1_Area2 = C1_area > C2_area;
       int ComparaArea2_Area1 = C2_area > C1_area;
       int ResultadoArea = ComparaAra1_Area2 >= ComparaArea2_Area1;

       int ComparaPIB1_PIB2 = C1_PIB > C2_PIB;
       int ComparaPIB2_PIB1 = C2_PIB > C1_PIB;
       int ResultadoPIB = ComparaPIB1_PIB2 >= ComparaPIB2_PIB1;

       int ComparaHabitantes1_Habitantes2 = C1_habitantes > C2_habitantes;
       int ComparaHabitantes2_Habitantes1 = C2_habitantes > C1_habitantes;
       int ResultadoHabitantes = ComparaHabitantes1_Habitantes2 >= ComparaHabitantes2_Habitantes1;

    // Decisção e impressão de resultado.

        printf("Comparação de Cartas:\n");

        if (ResultadoTurismo == 1)
            printf("Ponto Turisticos: Carta 1 venceu (%d)\n", ResultadoTurismo);
        else ( printf("Ponto Turisticos: Carta 2 venceu (%d)\n", ResultadoTurismo));

        if (ResultadoArea == 1)
            printf("Área: Carta 1 venceu (%d)\n", ResultadoArea);
         else ( printf("Área: Carta 2 venceu (%d)\n", ResultadoArea));

        if (ResultadoPIB == 1)
            printf("PIB: Carta 1 venceu (%d)\n", ResultadoPIB);
        else ( printf("PIB: Carta 2 venceu (%d)\n", ResultadoPIB));

        if (ResultadoHabitantes == 1)
            printf("População: Carta 1 venceu (%d)\n", ResultadoHabitantes);
        else ( printf("População: Carta 2 venceu (%d)\n", ResultadoHabitantes));

        if (ResultadoDensidade == 1)
            printf("Densidade Populacional: Carta 1 venceu (%d)\n", ResultadoDensidade);
        else ( printf("Densidade Populacional: Carta 2 venceu (%d)\n", ResultadoDensidade));

        if (ResultadoPerCapita == 1)
            printf("PIB Per Capita: Carta 1 venceu (%d)\n", ResultadoPerCapita);
        else(printf("PIB Per Capita: Carta 2 venceu (%d)\n", ResultadoPerCapita));
        
        if (ResultadoSuperTrunfo == 1)
            printf("Super Poder: Carta 1 venceu (%d)\n", ResultadoSuperTrunfo);
        else (printf("Super Poder: Carta 2 venceu (%d)\n", ResultadoSuperTrunfo));

    return 0;
}