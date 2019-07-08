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
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> vec1;
    vector<int> vec2;
    vector<int> vec3;

    copy(vec.cbegin(), vec.cend(), inserter(vec1, vec1.begin()) );
    copy(vec.cbegin(), vec.cend(), back_inserter(vec3));

    print(vec1);
    print(vec3);

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




