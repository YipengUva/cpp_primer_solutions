#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

bool check_size(string &s, size_t sz)
{
    return s.size() > sz;
}

auto check_size6 = bind(check_size, std::placeholders::_1, 6);

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

    partition(vec.begin(), vec.end(), check_size6);
    print(vec);

    int out = count_if(vec.begin(), vec.end(), check_size6);

    cout << out << endl;

    return 0;
}





