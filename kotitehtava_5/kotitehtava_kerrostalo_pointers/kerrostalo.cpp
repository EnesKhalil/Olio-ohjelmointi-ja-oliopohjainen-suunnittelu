#include "asunto.h"
#include <iostream>
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso;
    toka = new Katutaso;
    Kolmas = new Katutaso;

    cout<<"Kerrostalo luotu"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    Kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    eka = nullptr;

    delete toka;
    toka = nullptr;

    delete Kolmas;
    Kolmas = nullptr;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kaikkiKulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + Kolmas->laskeKulutus(hinta);
    return kaikkiKulutus;
}
