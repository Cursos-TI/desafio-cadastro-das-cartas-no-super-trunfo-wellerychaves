#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// functiom prototype
float calcPopulationDensity(int population, float area);
float calcPIBperCapita(float pib, int population);
float densityInverter(float populationDensity);
float calcSuperPower(
    int population, float areaInsqkm, float pib, int touristSitesNumber, float pibPerCapita, float invertedDensity);
int attributeToCompare();
void startGame();

int main() {

	// Game options variable
	int menuOption;
	int itemToCompare;

	printf("Bem vindo ao super trunfo!\n");
	printf("• 1 - Iniciar jogo\n");
	printf("• 2 - Sair do jogo\n");
	printf("Escolha uma opção: ");

	scanf(" %d", &menuOption);

	switch (menuOption) {
	case 1:
		startGame();
		break;
	case 2:
		printf("Você escolheu sair\n");
		break;
	default:
		printf("Opção inválida! Saindo...\n");
		break;
	}

	return 0;
}

// function to calc the population density
float calcPopulationDensity(int population, float area) {
	return population / area;
};

// function to calc PIB per capita
float calcPIBperCapita(float pib, int population) {
	return pib / population;
};

// function to invert the population density
float densityInverter(float populationDensity) {
	if (populationDensity != 0) {
		return 1 / populationDensity;
	} else {
		return 0;
	}
};

// function to calculate the card superpower
float calcSuperPower(
    int population, float areaInsqkm, float pib, int touristSitesNumber, float pibPerCapita, float invertedDensity) {

	return population + areaInsqkm + pib + touristSitesNumber + pibPerCapita + invertedDensity;
};

int attributeToCompare() {
	int chosenAttribute;

	printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Número de pontos turísticos\n");
	printf("5 - Densidade demográfica\n");
	printf("Escolha uma opção: ");
	scanf(" %d", &chosenAttribute);

	if (chosenAttribute < 1 || chosenAttribute > 5) {
		printf("Opção inválida! Escolha entre 1 e 5.\n");
		exit(0);
	}
	return chosenAttribute;
};

void startGame() {

	// declarations of variables

	// cards mockup
	char countryName1[27] = "Brasil";
	unsigned long int population1 = 21531;
	float areaInsqkm1 = 8514876.0;
	float pib1 = 1.17e13;
	unsigned int touristSitesNumber1 = 50;

	char countryName2[27] = "Canadá";
	unsigned long int population2 = 3893;
	float areaInsqkm2 = 9984670;
	float pib2 = 1.217e13;
	unsigned int touristSitesNumber2 = 74;

	// variables to store calcs
	float populationDensity1;
	float pibPerCapita1;
	float invertedDensity1;
	float superPower1;

	float populationDensity2;
	float pibPerCapita2;
	float invertedDensity2;
	float superPower2;

	unsigned int selectedAttribute1;
	unsigned int selectedAttribute2;

	// variables to use in the attribute calc
	float sumAttributesCard1;
	float sumAttributesCard2;
	float attribute1Card1, attribute1Card2;
	float attribute2Card1, attribute2Card2;

	printf("\n• Super Trunfo! •\n");

	// attribute selection
	printf("\nSelecione o 1° que gostaria de comparar entre as cartas:\n");
	selectedAttribute1 = attributeToCompare();
	printf("\nSelecione o 2° atributo gostaria de comparar:\n");
	selectedAttribute2 = attributeToCompare();

	while (selectedAttribute2 == selectedAttribute1) {
		printf("\nVocê deve selecionar um atributo diferente do selecionado anteriormente\n");
		selectedAttribute2 = attributeToCompare();
	}

	printf("\n\n");
	// Colect card 1 infos

	// Cards calculations
	populationDensity1 = calcPopulationDensity(population1, areaInsqkm1);
	pibPerCapita1 = calcPIBperCapita(pib1, population1);
	invertedDensity1 = densityInverter(populationDensity1);
	superPower1 = calcSuperPower(population1, areaInsqkm1, pib1, touristSitesNumber1, pibPerCapita1, invertedDensity1);

	populationDensity2 = calcPopulationDensity(population2, areaInsqkm2);
	pibPerCapita2 = calcPIBperCapita(pib2, population2);
	invertedDensity2 = densityInverter(populationDensity2);
	superPower2 = calcSuperPower(population2, areaInsqkm2, pib2, touristSitesNumber2, pibPerCapita2, invertedDensity2);

	// Card comparison
	printf("Carta 1: %s\nCarta 2: %s\n\n", countryName1, countryName2);

	// card 1 comparison
	switch (selectedAttribute1) {
	case 1:
		printf("1° atributo escolhido: População\n");
		printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);

		attribute1Card1 = population1;
		attribute1Card2 = population2;
		break;
	case 2:
		printf("2° atributo escolhido: Área\n");
		printf("Carta 1: %.2f km² Carta 2: %.2f km²\n", areaInsqkm1, areaInsqkm2);

		attribute1Card1 = areaInsqkm1;
		attribute1Card2 = areaInsqkm2;
		break;
	case 3:
		printf("2° atributo escolhido: PIB\n");
		printf("Carta 1: %.2f: Carta 2: %.2f\n", pib1, pib2);

		attribute1Card1 = pib1;
		attribute1Card2 = pib2;
		break;
	case 4:
		printf("2° atributo escolhido: Número de pontos turísticos\n");
		printf("Carta 1: %d Carta 2: %d\n", touristSitesNumber1, touristSitesNumber2);

		attribute1Card1 = touristSitesNumber1;
		attribute1Card2 = touristSitesNumber2;
		break;
	case 5:
		printf("2° atributo escolhido: Densidade demográfica\n");
		printf("Carta 1: %.2f Carta 2: %.2f\n", invertedDensity1, invertedDensity2);

		attribute1Card1 = invertedDensity1;
		attribute1Card2 = invertedDensity2;
		break;
	}

	printf("\n");

	// card 2 comparison
	switch (selectedAttribute2) {
	case 1:
		printf("2° atributo escolhido: População\n");
		printf("Carta 1: %lu, Carta 2: %lu\n", population1, population2);

		attribute2Card1 = population1;
		attribute2Card2 = population2;
		break;

	case 2:
		printf("2° atributo escolhido: Área\n");
		printf("Carta 1: %.2f km² Carta 2: %.2f km²\n", areaInsqkm1, areaInsqkm2);

		attribute2Card1 = areaInsqkm1;
		attribute2Card2 = areaInsqkm2;
		break;

	case 3:
		printf("2° atributo escolhido: PIB\n");
		printf("Carta 1: %.2f: Carta 2: %.2f\n", pib1, pib2);

		attribute2Card1 = pib1;
		attribute2Card2 = pib2;
		break;

	case 4:
		printf("2° atributo escolhido: Número de pontos turísticos\n");
		printf("Carta 1: %d Carta 2: %d\n", touristSitesNumber1, touristSitesNumber2);

		attribute2Card1 = touristSitesNumber1;
		attribute2Card2 = touristSitesNumber2;
		break;

	case 5:
		printf("2° atributo escolhido: Densidade demográfica\n");
		printf("Carta 1: %.2f Carta 2: %.2f\n", invertedDensity1, invertedDensity2);

		attribute2Card1 = invertedDensity1;
		attribute2Card2 = invertedDensity2;
		break;

	default:
		printf("Opção inválida, inicie novamente!\n");
		break;
	}

	sumAttributesCard1 = attribute1Card1 + attribute2Card1;
	sumAttributesCard2 = attribute1Card2 + attribute2Card2;

	printf("\n");

	if (sumAttributesCard1 > sumAttributesCard2) {
		printf("%s venceu com soma %.2f!\n", countryName1, sumAttributesCard1);
	} else if (sumAttributesCard1 < sumAttributesCard2) {
		printf("%s venceu com soma %.2f!\n", countryName2, sumAttributesCard2);
	} else {
		printf("Empate!\n");
	}
}