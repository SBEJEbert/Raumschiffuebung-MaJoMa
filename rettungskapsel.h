#ifndef RETTUNGSKAPSEL_H
#define RETTUNGSKAPSEL_H

class Rettungskapsel
{
private:
    int serienNr = 888;
    int freiePlaetze;
public:
    Rettungskapsel();
    ~Rettungskapsel();
    int getSerienNr();
    int getFreiePlaetze();
    void setSerienNr(int);
    void setFreiePlaetze(int);
};

#endif // RETTUNGSKAPSEL_H
