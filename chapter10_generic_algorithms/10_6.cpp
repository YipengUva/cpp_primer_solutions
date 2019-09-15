#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int main()
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};

    fill_n(vec.begin(), vec.size(), 0);

    for(auto &ele : vec){
        cout << ele << " ";
    }

    return 0;
}
