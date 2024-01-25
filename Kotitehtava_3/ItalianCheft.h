#ifndef ITALIANCHEFT_H
#define ITALIANCHEFT_H
#include <iostream>
using namespace std;

class ItalianChef: public Chef{
public:
   ~ItalianChef();
    ItalianChef(string, int, int);
    string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEFT_H
