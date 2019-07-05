#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> v1;

    vector<int> v2(10);

    vector<int> v3(10, 1);

    vector<int> v4 = {1, 2, 3};

    vector<int> v5 = v4;

    vector<int> v6(v4);


    return 0;
}
