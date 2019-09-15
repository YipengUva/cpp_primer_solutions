#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> iv;

    // cout << iv.at(0) << endl;
    cout << iv[0] << endl;
    cout << iv.front() << endl;
    cout << *(iv.begin()) << endl;

    return 0;
}
