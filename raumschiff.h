#ifndef RAUMSCHIFF_H
#define RAUMSCHIFF_H
#include "rettungskapsel.h"
#include <string>
using namespace std;

class Raumschiff
{
private:
    string m_sName;
    uint32_t m_dwEnergie;

    uint32_t m_dwXpos = 0;
    uint32_t m_dwYpos = 0;

public:

    void setName(string name);
    void setEnergie(uint32_t e);
    void setRaumschiff(Raumschiff *r);
    void setPosition(uint32_t xIn, uint32_t yIn);
    string getName();
    uint32_t getEnergie();
    void printData();

    void senden(string s);
    void empfangen(string s);
};

#endif // RAUMSCHIFF_H
