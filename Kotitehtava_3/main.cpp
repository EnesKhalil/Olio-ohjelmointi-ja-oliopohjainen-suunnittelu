#include <iostream>
#include "chef.h"
#include "ItalianCheft.h"

using namespace std;

int main()
{

    Chef kokki("Jyrki");
    ItalianChef kokki2("Mario");
    kokki.makeSalad();
    kokki2.makePasta(100, 250);

    return 0;
}
