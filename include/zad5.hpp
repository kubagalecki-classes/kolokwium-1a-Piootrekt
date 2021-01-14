#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle
template <typename T>
void sortujTagliatelle(T t1, T t2)
{
	std::sort(t1, t2, [](Tagliatelle& tag1, Tagliatelle& tag2) { return tag1.ileMaki(1) > tag2.ileMaki(1); });
}
