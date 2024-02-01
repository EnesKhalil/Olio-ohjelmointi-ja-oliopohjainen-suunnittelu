#ifndef KERROS_H
#define KERROS_H
#include <iostream>
#include "asunto.h"

using namespace std;

class Kerros
{
public:

    Kerros();
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
    Asunto as;
    virtual void maaritaAsunnot();
    double laskeKulutus(double);

};

#endif // KERROS_H
