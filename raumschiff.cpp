#include "raumschiff.h"
#include <iostream>
using namespace std;

void Raumschiff::setName(string n)
{
    name = n;
}

void Raumschiff::setEnergie(int e)
{
    energie = e;
}

void Raumschiff::setPosition(int x, int y)
{
    xpos = x;
    ypos = y;
}

string Raumschiff::getName()
{
    return name;
}

int Raumschiff::getEnergie()
{
    return energie;
}


void Raumschiff::printData()
{
    cout << "Raumschiffname: " << name << endl;
    cout << "Eigene Adresse: " << this << endl;
    cout << "Energie: " << energie << endl;
    cout << "Position: x=" << xpos << " y=" << ypos << endl;
}

