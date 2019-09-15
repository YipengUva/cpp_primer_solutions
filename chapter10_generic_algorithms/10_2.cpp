#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>

using namespace std;

int main()
{
    string val;

    list<string> vec;

    while(cin >> val){
        vec.push_back(val);
    }

    string val2 = "yipeng";
    int out = count(vec.begin(), vec.end(), val2);

    cout << val2 << " occurs " << out << " times" << endl;

    return 0;
}
