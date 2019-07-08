#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

#include "Sales_data.h"

using namespace std;

int main()
{
    auto f = [] (int a, int b)
                 {
                     return a + b;
                 };
    cout << f(10, 20) << endl;

    return 0;
}
