#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracja)
class Makaron 
{ 
public:
    static Makaron* gotujMakaron(const std::string& str);
    virtual double ileMaki(unsigned P) const = 0;
};

// Zad1
// tutaj definicja klasy Tagliatelle
class Tagliatelle : public Makaron
{
public:
    Tagliatelle(double a, double b, double c) : L{ a }, W{ b }, R{ c } {}
    Tagliatelle() : L{ 0.5 }, W{ 0.5 }, R{ 0.5 } {}
    double ileMaki(unsigned P) const override
    {
        return P * L * W * (1. - R) * C;
    }
private:
    double L;
    double W;
    double R;
    static const double C;
};