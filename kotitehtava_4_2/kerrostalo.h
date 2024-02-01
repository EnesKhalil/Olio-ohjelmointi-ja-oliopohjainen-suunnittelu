#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>

using namespace std;

class Kerrostalo
{
private:
    Katutaso eka;
    Kerros toka;
    Kerros Kolmas;
public:
    Kerrostalo();

    double laskeKulutus(double);
};

#endif // KERROSTALO_H
