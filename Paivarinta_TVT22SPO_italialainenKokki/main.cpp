#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki1("Jarppi");
    ItalianChef italialainenkokki1("Gioele",100,200);
    kokki1.makeSalad();
    kokki1.makeSoup();
    italialainenkokki1.makeSalad();
    italialainenkokki1.makeSoup();
    italialainenkokki1.makePasta();
    return 0;
}
