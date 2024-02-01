#include "asunto.h"
#include <iostream>
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    Kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kaikkiKulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + Kolmas.laskeKulutus(hinta);
    return kaikkiKulutus;
}
