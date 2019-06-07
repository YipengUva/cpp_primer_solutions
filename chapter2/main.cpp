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
    typedef double wages;
    wages yipeng = 1000.0;
    cout << yipeng << endl;

    using SI = Sales_item;
    SI item;


    return 0;
}
