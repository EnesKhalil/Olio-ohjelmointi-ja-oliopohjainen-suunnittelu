#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    double sum;
    Kerrostalo *objKerrostalo;
    objKerrostalo = new Kerrostalo;
    sum= objKerrostalo->laskeKulutus(1);

    cout<< "Kerrostalon kulutus"<<sum<<endl;

    delete objKerrostalo;
    objKerrostalo = nullptr;

    return 0;
}
