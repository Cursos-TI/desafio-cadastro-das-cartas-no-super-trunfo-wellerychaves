#include <stdio.h>
#include <ctype.h>
#include <string.h>

// function to calc the population desnsity
float calcPopulationDensity(int population, float area)
{
    return population / area;
};

// functoin to calc PIB per capita
float calcPIBperCapita(float pib, int população)
{
    return pib / população;
};

int main()
{
    // Card 1 Variables
    char state1;
    char cardCode1[3];
    char city1[27];
    int population1;
    float areaInsqkm1;
    float pib1;
    int touristSitesNumber1;
    float populationDensity1;

    // card 2 Variables
    char state2;
    char cardCode2[3];
    char city2[27];
    int population2;
    float areaInsqkm2;
    float pib2;
    int touristSitesNumber2;
    float populationDensity2;

    // Colect card 1 infos
    printf("• Carta 1 • \n\n");

    printf("• Insira o caractere de estado de A a H:\n");
    scanf(" %c", &state1);

    printf("• Insira o código da carta de 01 a 04:\n");
    scanf(" %2s", cardCode1);
    getchar();

    printf("• Qual o nome da cidade?\n");
    fgets(city1, 27, stdin);
    city1[strcspn(city1, "\n")] = 0;

    printf("• Qual é a população da cidade? (Ex: 1234567):\n");
    scanf(" %d", &population1);

    printf("• Qual o tamanho da cidade em Km² (Ex: 1234.56)\n");
    scanf(" %f", &areaInsqkm1);

    printf("• Qual o PIB da cidade? (Ex: 123.45)\n");
    scanf(" %f", &pib1);

    printf("• Quantos pontos turísticos a cidade possui? (Ex: 10)\n");
    scanf(" %d", &touristSitesNumber1);

    // Colect card 2 infos
    printf("\n\n• Carta 2 • \n\n");

    printf("• Insira o caractere de estado de A a H:\n");
    scanf(" %c", &state2);

    printf("• Insira o código da carta de 01 a 04:\n");
    scanf(" %2s", cardCode2);
    getchar();

    printf("• Qual o nome da cidade?\n");
    fgets(city2, 27, stdin);
    city2[strcspn(city2, "\n")] = 0;

    printf("• Qual é a população da cidade? (Ex: 1234567):\n");
    scanf(" %d", &population2);

    printf("• Qual o tamanho da cidade em Km² (Ex: 1234.56)\n");
    scanf(" %f", &areaInsqkm2);

    printf("• Qual o PIB da cidade? (Ex: 123.45)\n");
    scanf(" %f", &pib2);

    printf("• Quantos pontos turísticos a cidade possui? (Ex: 10)\n");
    scanf(" %d", &touristSitesNumber2);

    // List cards
    printf("\n\n\n");

    // Print Card 1
    printf("• Carta 1 • \n\n");
    printf("Estado: %c\n", state1);
    printf("Carta: %s\n", cardCode1);
    printf("Código: %c%s\n", state1, cardCode1);
    printf("Cidade: %s\n", city1);
    printf("População: %d\n", population1);
    printf("Área: %.2f Km²\n", areaInsqkm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Densidade Populacional: %.2f\n", calcPopulationDensity(population1, areaInsqkm1));
    printf("PIB per Capita: %.2f\n", calcPIBperCapita(pib1, population1));
    printf("Número de pontos turísticos: %d\n", touristSitesNumber1);

    printf("\n\n");

    // Print Card 2
    printf("• Carta 2 • \n\n");
    printf("Estado: %c\n", state2);
    printf("Carta: %s\n", cardCode2);
    printf("Código: %c%s\n", state2, cardCode2);
    printf("Cidade: %s\n", city2);
    printf("População: %d\n", population2);
    printf("Área: %.2f Km²\n", areaInsqkm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Densidade populacional: %.2f\n", calcPopulationDensity(population2, areaInsqkm2));
    printf("PIB per Capita: %.2f\n", calcPIBperCapita(pib2, population2));
    printf("Número de pontos turísticos: %d\n", touristSitesNumber2);

    return 0;
}
