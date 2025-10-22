#include <iostream>
#include "raumschiff.h"
#include "rettungskapsel.h"

using namespace std;

int main()
{
    Raumschiff *s1 = new Raumschiff;
    Raumschiff *s2 = new Raumschiff;

    s1->setName("Enterprise");
    s2->setName("Voyager");

    s1->printData();
    s2->printData();

    return 0;
}
