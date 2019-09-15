#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    list<int> ls = {1, 2, 3, 4, 5, 65, 100};

    vector<double> v(ls.begin(), ls.end());
    cout << v[6] << endl;

    vector<int> v1 = {1, 2, 3, 4, 5, 65, 100};
    vector<double> v2(v1.begin(), v1.end());
    cout << v2[6] << endl;

    return 0;
}
