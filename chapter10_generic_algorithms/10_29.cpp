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
    istream_iterator<string> str_it(cin);
    istream_iterator<string> eof;

    vector<string> vec(str_it, eof);

    print(vec);

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





