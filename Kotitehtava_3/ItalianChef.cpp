#include <iostream>
#include "chef.h"
#include "ItalianCheft.h"
#include <string>

using namespace std;

ItalianChef::~ItalianChef(){
    //cout << "Chef " << name << " destruktori"<< endl;
}
ItalianChef::ItalianChef(string b):Chef(b){
    name = b;
    //cout << "Chef " << name << " konstruktori"<< endl;
}
string ItalianChef::getName(){
   return name;
}
void ItalianChef::makePasta(int a, int b){
    vesi = a;
    jauhot = b;
    cout << "Chef " << getName() << " makes pasta with special recipe"<<endl;
    cout << "Chef " << getName() << " uses flour = "<< jauhot<<endl;
    cout << "Chef " << getName() << " uses water = "<< vesi<<endl;

}



