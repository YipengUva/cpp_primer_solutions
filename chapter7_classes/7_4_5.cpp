#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
    Person yipeng;
    cout << "input name and address: ";

    cin >> yipeng.name >> yipeng.address;

    cout << "name: " << yipeng.get_name() << endl;
    cout << "address: " << yipeng.get_address() << endl;

    return 0;
}
