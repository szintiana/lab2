#include <iostream>
#include <vector>
#include "complex.h"

int main()
{
	int n;
	std::cout << "Wie viele Zahlen?" << std::endl;
	std::cin >> n;

	std::vector<complex> vektor;
	for (int i = 0; i < n; i++)
	{
		std::cout << "Reeller Teil: " << std::endl;
		double a, b;
		std::cin >> a;
		std::cout << "Imaginaerer Teil: " << std::endl;
		std::cin >> b;
		complex z(a, b);
		vektor.push_back(z);
	}

	std::cout << "Komplexe Zahlen:" << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << vektor[i].getReellerTeil() << " + " << vektor[i].getImaginaererTeil() << "i," << std::endl;
	}

	complex z = vektor[0];
	for (int i = 1; i < n; i++)
	{
		z.add(vektor[i]);
	}

	std::cout << "Summe: " << z.getReellerTeil() << " + " << z.getImaginaererTeil() << "i";

	for (int i = 0; i < n - 1; i++)
	{
		int min_idx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (vektor[j].abs() < vektor[min_idx].abs())
				min_idx = j;
			complex aux = vektor[i];
			vektor[i] = vektor[min_idx];
			vektor[min_idx] = aux;
		}
	}

	std::cout <<  std::endl << "Sorted: " << std::endl;

	for (int i = 0; i < n; i++)
	{
		std::cout << vektor[i].getReellerTeil() << " + " << vektor[i].getImaginaererTeil() << "i, Absoluter Betrag: " << vektor[i].abs() << std::endl;
	}

	return 0;
}