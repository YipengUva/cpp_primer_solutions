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

void print(vector<string> &);

int main()
{
    vector<int> vec = {0, 1 , 2, 3, 4, 5, 6, 7, 8, 9};

    for(auto iter = vec.end()-1; iter >= vec.begin(); --iter){
        cout << *iter << " ";
    }

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


void print(vector<string> &lst)
{
    for(auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}





