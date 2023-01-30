#include "italianchef.h"
#include <iostream>
#include <string>
ItalianChef::ItalianChef(string a, int b, int c) : Chef(a)
{
    vesi=b;
    jauhot=c;
    getName();
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}


ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with a speacial recipe."<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
}
