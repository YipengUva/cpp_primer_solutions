#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
    // default constructor
    Person yipeng1;
    print(cout, yipeng1);

    // init list
    Person yipeng2("yipeng", "1094LA");
    print(cout, yipeng2);

    // cin init
    Person yipeng3(cin);
    print(cout, yipeng3);

    return 0;
}
