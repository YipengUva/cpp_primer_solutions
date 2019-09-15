#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

void print(list<int> &);

void print(vector<int> &);

int main()
{
    vector<int> vec = {1, 2, 2, 4, 9, 10, 4, 9, 10};
    list<int> lst;

    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
    print(vec);
    print(lst);

    return 0;
}


void print(list<int> &lst)
{
    for(auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}

void print(vector<int> &lst)
{
    for(auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}




