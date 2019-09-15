#include <iostream>
#include <string>
#include "Sales_item.h"

using namespace std;

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    double dval = 2.0;
    double *pd = &dval;
    double *pd2 = pd;

    cout << &pd2 << endl;
    cout << *pd2 << endl;

    double x = 3.14;
    double &y = x;
    cout << y << endl;

    int *pd3 = nullptr;
    if (pd3){
        cout << "nullptr" << endl;
    }else{
        cout << "none null" << endl;
    }

    const int ci = 1024;
    const int &r1 = ci;
    cout << r1 << endl;

    int i = 42;
    const int &r2 = i;
    const int &r3 = 42;

    typedef double wages;
    wages z = 100;
    cout << z << endl;


    return 0;
}
