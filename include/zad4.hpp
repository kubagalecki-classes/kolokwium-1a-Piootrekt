#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle> w)
{
	double M = 0.;
	int i = 0;
	for (auto it = w.rbegin(); it != w.rend(); it++)
	{
		i++;
		M += it->ileMaki(i);
	}
	if (M > 100) 
	{
		int a = 21;
		throw(a);
	}
	else if ((M > 50) && (M <= 100))
	{
		double b = 37.;
		throw(b);
	}
	else if (M <= 50)
	{
		return M;
	}
}