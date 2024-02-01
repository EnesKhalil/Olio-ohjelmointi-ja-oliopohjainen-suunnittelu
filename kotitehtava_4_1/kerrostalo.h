#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>

using namespace std;

class Kerrostalo
{
public:
    Kerrostalo();
    Katutaso eka;
    Kerros toka;
    Kerros Kolmas;
    double laskeKulutus(double);
};

#endif // KERROSTALO_H
