#include <cmath>
#include <string>
#include <math.h>
#include "complex.h"

using namespace std;

complex::complex(double reellerTeil, double imaginaererTeil)
{
	this->reellerTeil = reellerTeil;
	this->imaginaererTeil = imaginaererTeil;
}

double complex::getReellerTeil()
{
	return this->reellerTeil;
}

double complex::getImaginaererTeil()
{
	return this->imaginaererTeil;
}

void complex::add(complex a)
{
	this->reellerTeil += a.reellerTeil;
	this->imaginaererTeil += a.imaginaererTeil;
}

void complex::mult(complex a)
{
	complex b = *this;
	this->reellerTeil = a.reellerTeil * b.reellerTeil - b.imaginaererTeil * a.imaginaererTeil;
	this->imaginaererTeil = a.reellerTeil * b.imaginaererTeil + a.imaginaererTeil * b.reellerTeil;
}

void complex::quot(complex a)
{
	complex b = *this;
	b.imaginaererTeil *= (-1);
	a.mult(b);
	this->mult(b);
	if (a.reellerTeil != 0)
	{
		this->reellerTeil /= a.reellerTeil;
		this->imaginaererTeil /= a.reellerTeil;
	}
}

double complex::abs()
{
	return sqrt((this->reellerTeil * this->reellerTeil) + (this->imaginaererTeil * this->imaginaererTeil));
}

complex complex::compute_polar()
{
	if (this->reellerTeil != 0 || tan(this->imaginaererTeil / this->reellerTeil) != 0)
	{
		double teta = 1 / tan(this->imaginaererTeil / this->reellerTeil);
		complex z(cos(teta), sin(teta));
		return z;
	}
	return *this;
}