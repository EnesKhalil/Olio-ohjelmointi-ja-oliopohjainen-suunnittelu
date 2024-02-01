#include "katutaso.h"
#include "asunto.h"
#include <iostream>
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;


Katutaso::Katutaso()
{
    cout<< "Katutaso luotu"<< endl;

}

void Katutaso::maaritaAsunnot()
{
    cout<< "Maritellaan 2 kpl katutason asuntoa"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
}

double Katutaso::laskeKulutus(double hinta)
{
    double katutaoKulutus = as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);

    return katutaoKulutus;
}

