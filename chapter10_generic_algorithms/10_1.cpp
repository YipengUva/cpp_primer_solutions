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

    int val2 = 5;
    int out = count(vec.begin(), vec.end(), val2);

    cout << val2 << " occurs " << out << " times" << endl;

    return 0;
}
