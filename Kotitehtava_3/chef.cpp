#include <iostream>
#include "chef.h"
#include "ItalianCheft.h"

using namespace std;
Chef::~Chef() {
    cout << "Chef " << name << " destruktori"<< endl;
}
Chef::Chef(string a){
    name = a;
    cout << "Chef " << name << " konstruktori"<< endl;
}
void Chef::makeSalad(){
    cout << "Chef " << name << " makes salad"<< endl;
}
void Chef::makeSoup(){
    cout << "Chef " << name << " makes soup"<< endl;
}
