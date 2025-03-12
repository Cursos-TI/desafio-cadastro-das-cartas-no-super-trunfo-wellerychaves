#include <stdio.h>
// #include <ctype.h>
#include <string.h>

// function to calc the population desnsity
float calcPopulationDensity(int population, float area) {
	return population / area;
};

// functoin to calc PIB per capita
float calcPIBperCapita(float pib, int população) {
	return pib / população;
};

float densityInverter(float populationDensity) {
	return 1 / populationDensity;
};

float calcSuperPower(int population, float areaInsqkm, float pib, int touristSitesNumber, float pibPerCapita, float invertedDensity) {
	return population + areaInsqkm + pib + touristSitesNumber + pibPerCapita + invertedDensity;
};

int main() {
	// Card 1 Variables
	char state1;
	char cardCode1[3];
	char city1[27];
	unsigned long int population1;
	float areaInsqkm1;
	float pib1;
	int touristSitesNumber1;
	float populationDensity1;
	float pibPerCapita1;
	float invertedDensity1;
	float superPower1;

	// card 2 Variables
	char state2;
	char cardCode2[3];
	char city2[27];
	unsigned long int population2;
	float areaInsqkm2;
	float pib2;
	int touristSitesNumber2;
	float populationDensity2;
	float pibPerCapita2;
	float invertedDensity2;
	float superPower2;

	printf("Super Trunfo! \nInsira as caracteristicas de cada carta\n");

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
	scanf(" %lu", &population1);

	printf("• Qual o tamanho da cidade em Km² (Ex: 1234.56)\n");
	scanf(" %f", &areaInsqkm1);

	printf("• Qual o PIB da cidade? (Ex: 123.45)\n");
	scanf(" %f", &pib1);

	printf("• Quantos pontos turísticos a cidade possui? (Ex: 10)\n");
	scanf(" %d", &touristSitesNumber1);

	// Calculations from card 1
	populationDensity1 = calcPopulationDensity(population1, areaInsqkm1);
	pibPerCapita1 = calcPIBperCapita(pib1, population1);
	invertedDensity1 = densityInverter(populationDensity1);
	superPower1 = calcSuperPower(population1, areaInsqkm1, pib1, touristSitesNumber1, pibPerCapita1, invertedDensity1);

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
	scanf(" %lu", &population2);

	printf("• Qual o tamanho da cidade em Km² (Ex: 1234.56)\n");
	scanf(" %f", &areaInsqkm2);

	printf("• Qual o PIB da cidade? (Ex: 123.45)\n");
	scanf(" %f", &pib2);

	printf("• Quantos pontos turísticos a cidade possui? (Ex: 10)\n");
	scanf(" %d", &touristSitesNumber2);

	// Calculations from card 2
	populationDensity2 = calcPopulationDensity(population2, areaInsqkm2);
	pibPerCapita2 = calcPIBperCapita(pib2, population2);
	invertedDensity2 = densityInverter(populationDensity2);
	superPower2 = calcSuperPower(population2, areaInsqkm2, pib2, touristSitesNumber2, pibPerCapita2, invertedDensity2);

	// List cards
	printf("\n\n\n");

	// Card comparison
	printf("População: Carta %s venceu! (%s)\n", (population1 > population2) ? "1" : "2", (population1 > population2) ? "1" : "0");
	printf("Área: Carta %s venceu! (%s)\n", (areaInsqkm1 > areaInsqkm2) ? "1" : "2", (areaInsqkm1 > areaInsqkm2) ? "1" : "0");
	printf("PIB: Carta %s venceu! (%s)\n", (pib1 > pib2) ? "1" : "2", (pib1 > pib2) ? "1" : "0");
	printf("Pontos Turísticos: Carta %s venceu! (%s)\n", (touristSitesNumber1 > touristSitesNumber2) ? "1" : "2", (touristSitesNumber1 > touristSitesNumber2) ? "1" : "0");
	printf("Densidade Populacional: Carta %s venceu! (%s)\n", (populationDensity1 > populationDensity2) ? "1" : "2", (populationDensity1 > populationDensity2) ? "1" : "0");
	printf("PIB per Capita: Carta %s venceu! (%s)\n", (pibPerCapita1 > pibPerCapita2) ? "1" : "2", (pibPerCapita1 > pibPerCapita2) ? "1" : "0");
	printf("Super Poder: Carta %s venceu! (%s)\n", (superPower1 > superPower2) ? "1" : "2", (superPower1 > superPower2) ? "1" : "0");

	// Print Card 1
	/*
	printf("• Carta 1 • \n\n");
	printf("Estado: %c\n", state1);
	printf("Carta: %s\n", cardCode1);
	printf("Código: %c%s\n", state1, cardCode1);
	printf("Cidade: %s\n", city1);
	printf("População: %lu\n", population1);
	printf("Área: %.2f Km²\n", areaInsqkm1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Densidade Populacional: %.2f\n", populationDensity1);
	printf("PIB per Capita: %.2f\n", pibPerCapita1);
	printf("Número de pontos turísticos: %d\n", touristSitesNumber1);
	*/

	// Print Card 2
	/*
	printf("• Carta 2 • \n\n");
	printf("Estado: %c\n", state2);
	printf("Carta: %s\n", cardCode2);
	printf("Código: %c%s\n", state2, cardCode2);
	printf("Cidade: %s\n", city2);
	printf("População: %lu\n", population2);
	printf("Área: %.2f Km²\n", areaInsqkm2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Densidade populacional: %.2f\n", populationDensity2);
	printf("PIB per Capita: %.2f\n", pibPerCapita2);
	printf("Número de pontos turísticos: %d\n", touristSitesNumber2);
	*/
	return 0;
}
