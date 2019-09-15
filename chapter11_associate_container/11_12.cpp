#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
#include <utility>

using namespace std;

istream &read(istream &, pair<string, int> &);

void print(pair<string, int> &);

void print(vector<pair<string, int> > &);

int main()
{
    pair<string, int> exmp;
    vector<pair<string, int> > vec;

    while(read(cin, exmp)){
        vec.push_back(exmp);
    }

    print(vec);

    return 0;
}

istream &read(istream &is, pair<string, int> &exmp)
{
    string tmp1;
    int tmp2;
    is >> tmp1 >> tmp2;
    exmp = make_pair(tmp1, tmp2);

    return is;
}

void print(pair<string, int> &exmp)
{
    cout << exmp.first << " occurs " << exmp.second;
}

void print(vector<pair<string, int> > &vec)
{
    for (auto &ele : vec){
        print(ele);
        cout << endl;
    }
    cout << endl;
}

