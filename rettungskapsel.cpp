#include "rettungskapsel.h"
#include <iostream>
using namespace std;

Rettungskapsel::Rettungskapsel()
{
    cout << "Rettungskapsel erzeugt " << this << endl;
}

Rettungskapsel::~Rettungskapsel()
{
    cout << "Rettungskapsel " << this << " zerstoert" << endl;
}

int Rettungskapsel::getSerienNr()
{
    return serienNr;
}

int Rettungskapsel::getFreiePlaetze()
{
    return freiePlaetze;
}

void Rettungskapsel::setSerienNr(int s)
{
    serienNr = s;
}

void Rettungskapsel::setFreiePlaetze(int f)
{
    freiePlaetze = f;
}
