#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

#include "Sales_data.h"

using namespace std;

int fool(vector<int> &vec, int a)
{
    int sum = accumulate(vec.cbegin(), vec.cend(), 0);

    auto f = [sum] (int a)
                 {
                     return sum + a;
                 };
    return f(a);
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << fool(vec, 100) << endl;

    return 0;
}
