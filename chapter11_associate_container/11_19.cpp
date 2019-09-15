#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
#include <functional>

#include "Sales_data.h"

using namespace std;

bool compareIsbn(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.isbn() < rhs.isbn();
}

int main()
{
    multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);

    typedef bool (*fun_type)(const Sales_data &, const Sales_data &);
    multiset<Sales_data, fun_type> bookstore2;

    multiset<Sales_data, fun_type>::const_iterator = bookstore2.begin();

    return 0;
}
