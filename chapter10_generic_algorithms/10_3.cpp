#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int val;
    vector<int> vec;

    while(cin >> val){
        vec.push_back(val);
    }

    int out = accumulate(vec.cbegin(), vec.cend(), 0);
    cout << "sum is: " << out << endl;

    return 0;
}
