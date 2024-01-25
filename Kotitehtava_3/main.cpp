#include <iostream>
#include "chef.h"
#include "ItalianCheft.h"

using namespace std;

int main()
{

    Chef kokki("Jyrki");
    ItalianChef kokki2("Mario", 100, 250);
    kokki.makeSalad();
    kokki2.makePasta();

    return 0;
}
