#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

#include "Sales_data.h"

using namespace std;

bool str_over_5(string &s)
{
    return s.size() > 5;
}

void print(vector<string> &vec)
{
    for (auto &ele : vec){
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    vector<string> vec = {"Yipeng", "Song", "Settings", "the", "Help", "wxSmith"};
    print(vec);

    partition(vec.begin(), vec.end(), str_over_5);
    print(vec);

    return 0;
}
