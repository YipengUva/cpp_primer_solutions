#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

int main()
{
    double val;
    vector<double> vec;

    while(cin >> val){
        vec.push_back(val);
    }

    //double out = accumulate(vec.cbegin(), vec.cend(), 0);
    // using 0 will use + for integers.

    double out = accumulate(vec.cbegin(), vec.cend(), 0.0);

    cout << "sum is: " << out << endl;

    return 0;
}
