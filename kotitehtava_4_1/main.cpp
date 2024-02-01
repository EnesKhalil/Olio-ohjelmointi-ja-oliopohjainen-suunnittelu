#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    Asunto olio1;

    olio1.maarita(2,100);
    cout<< "Asunnon kulutus, kun hinta = 1 on "<< olio1.laskeKulutus()<< endl;

    return 0;
}
