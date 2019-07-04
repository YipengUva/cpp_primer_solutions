#include <iostream>
#include <string>
#include "Sales_data.h"

using namespace std;

int main()
{
    Sales_data sales_data1;
    print(cout, sales_data1);
    cout << '\n';

    string bookNo = "ISO11231233";
    Sales_data sales_data2(bookNo);
    print(cout, sales_data2);
    cout << '\n';

    unsigned n = 100;
    double p = 20.0;
    Sales_data sales_data3(bookNo, n, p);
    print(cout, sales_data3);
    cout << '\n';

    cout << "input the bookNo, number of sell, and the price: ";
    Sales_data sales_data4(cin);
    print(cout, sales_data4);
    cout << '\n';

    return 0;
}
