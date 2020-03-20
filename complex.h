#pragma once
#ifndef LAB2_COMPLEX_H
#define LAB2_COMPLEX_H
#include <string>
using namespace std;

class complex {

private:

	//Attribute: reellerTeil, imaginaererTeil - beide double
	double reellerTeil;
	double imaginaererTeil;

public:

	/*
	Konstruktor
	a + ib
	Paramtern:
	double reelerTeil - a
	double imaginaererTeil - b
	*/
	complex(double reellerTeil, double imaginaererTeil);

	/*
	Getter fuer reeller Teil
	*/
	double getReellerTeil();

	/*
	Getter fuer imaginaerer Teil
	*/
	double getImaginaererTeil();

	/*
	Addition
	Paramter: complex a
	Es addiert den komplexen Parameter a zur originellen Instanz der gegebenen komplexen Zahl.
	*/
	void add(complex a);

	/*
	Multiplikation
	Paramter: complex a
	Es multipliziert den komplexen Parameter a mit dem originellen Instanz der gegebenen komplexen Zahl.
	*/
	void mult(complex a);

	/*
	Quotient
	Paramter: complex a
	Es teilt mit dem komplexen Parameter a den originellen Instanz der gegebenen komplexen Zahl.
	*/
	void quot(complex a);

	/*
	Polarform
	Es bestimmt den Polarform des gegebenen Instanzes.
	*/
	complex compute_polar();

	/*
	Absoluter Betrag
	Es bestimmt den absoluten Betrag des gegebenen Instanzes.*/
	double abs();

};

#endif  