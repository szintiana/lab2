#include "complex.h"
#include "assert.h"

void getReellerTeil_test()
{
	complex z(1, 2);
	assert(1 == z.getReellerTeil());
}

void getImaginaererTeil_test()
{
	complex z(1, 2);
	assert(2 == z.getImaginaererTeil());
}

void add_test()
{
	complex z1(1, 2), z2(2, 4), z3(3, 6);
	z1.add(z2);
	assert(z3.getReellerTeil() == z1.getReellerTeil());
	assert(z3.getImaginaererTeil() == z1.getImaginaererTeil());
}

void mult_test()
{
	complex z1(1, 2), z2(0, 0);
	z1.mult(z2);
	assert(0 == z1.getReellerTeil());
	assert(0 == z1.getImaginaererTeil());
}

void quot_test()
{
	complex z1(0, 0), z2(1, 2);
	z1.quot(z2);
	assert(0 == z1.getReellerTeil());
	assert(0 == z1.getImaginaererTeil());
}

void abs_test()
{
	complex z(3, 4);
	assert(5 == z.abs());
}

int main()
{
	getReellerTeil_test();
	getImaginaererTeil_test();
	add_test();
	mult_test();
	quot_test();
	abs_test();

	return 0;
}