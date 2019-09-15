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
    istream_iterator<int> int_it(cin);
    istream_iterator<int> eof;

    vector<int> vec(int_it, eof);
    print(vec);

    sort(vec.begin(), vec.end());
    print(vec);

    ostream_iterator<int> int_os(cout, " ");
    unique_copy(vec.begin(), vec.end(), int_os);
    cout << endl;



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





