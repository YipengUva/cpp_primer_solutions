#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

bool check_size(int a, const string &s)
{
    return a > s.size();
}

auto check_size_s = bind(check_size, std::placeholders::_1, "yipeng");

void print(vector<int> &vec)
{
    for (auto &ele : vec){
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    auto wc = find_if(vec.begin(), vec.end(), check_size_s);

    cout << *wc << endl;

    return 0;
}





