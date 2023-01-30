#include "chef.h"
#include <iostream>
#include <string>
using namespace std;

Chef::Chef(string a)
{
    name = a;
    cout<<"Chef "<<name<<" konstruktori"<<endl;

}

Chef::~Chef()
{
    cout<<"Chef "<<name<<" desktruktori"<<endl;
};

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad."<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup."<<endl;
}
