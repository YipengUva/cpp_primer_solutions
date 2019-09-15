#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

int main()
{
    // a
    int i = -1;
    const int &r = 0;

    // b
    int i2 = 10;
    int *const p2 = &i2;
    //p2 = &i; // p2 is const

    // c
    const int ic = -1;
    const int &rc = 0;

    // d
    const int *const p3 = &i2;

    // e
    const int *p4 = &i2;

    // f
    const int &rf = rc;

    // g
    const int ig = i;
    const int &rg = i;


    return 0;
}
