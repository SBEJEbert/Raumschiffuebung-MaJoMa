#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "rettungskapsel.h"
#include <string>
using namespace std;

class Raumschiff
{
private:
    string name;
    int energie;

    int xpos = 0;
    int ypos = 0;

public:

    void setName(string n);
    void setEnergie(int e);
    void setRaumschiff(Raumschiff *r);
    void setPosition(int x, int y);
    string getName();
    int getEnergie();
    void printData();

    void senden(string s);
    void empfangen(string s);
};

#endif // RAUMSCHIFF_H
