#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
using namespace std;

class Kerrostalo
{
private:
    Katutaso * eka;
    Kerros * toka;
    Kerros * Kolmas;
public:
    Kerrostalo();
    ~Kerrostalo();

    double laskeKulutus(double);
};

#endif // KERROSTALO_H
