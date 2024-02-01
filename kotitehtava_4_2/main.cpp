#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    double sum;
    Katutaso* objKatutaso1 = new Katutaso();

    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    objKatutaso1->as1.maarita(2,100);
    sum = sum + objKatutaso1->as1.laskeKulutus();
    objKatutaso1->as2.maarita(2,100);
    sum = sum + objKatutaso1->as2.laskeKulutus();
    delete objKatutaso1;

    Kerros objkerros1;
     cout<<"Maaritetaan 4 kpl kerroksen asuntoja"<<endl;
     objkerros1.as1.maarita(2,100);
     sum = sum + objkerros1.as1.laskeKulutus();
     objkerros1.as2.maarita(2,100);
     sum = sum + objkerros1.as2.laskeKulutus();
     objkerros1.as3.maarita(2,100);
     sum = sum + objkerros1.as3.laskeKulutus();
     objkerros1.as4.maarita(2,100);
     sum = sum + objkerros1.as4.laskeKulutus();

     cout<<"Katutason ja perityn kerroksen kulutus, kun hinta 1 = "<<sum<<endl;

    return 0;
}
