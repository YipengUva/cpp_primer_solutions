#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

int main()
{
    int *ptr = nullptr;

    int val = 10;
    ptr = &val;
    cout << ptr << endl;

    *ptr = 1000;
    cout << val << endl;
    cout << *ptr << endl;

    return 0;
}
