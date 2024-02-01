#include "asunto.h"
#include <iostream>
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

Asunto::Asunto()
{
    cout<< "asunto luoto"<< endl;
}

Asunto::~Asunto()
{

}

void Asunto::maarita(int a, int p)
{
    asukasMaara = a;
    neliot = p;
    cout<< "Asunto maaritetty asukkaita = "<< asukasMaara<< " nelioita = "<< neliot<< endl;
}

double Asunto::laskeKulutus()
{
    return neliot * asukasMaara;
}
