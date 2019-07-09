#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

void print(const list<int> &lst);

int main()
{
    map<string, list<int> > words = {
                                     { "yipeng", {1, 2, 3}},
                                     { "song", {4, 5}},
                                     { "peng", {10, 20}},
                                     };

    for(const auto &w : words){
        cout << w.first << " occurs: ";
        print(w.second);
    }

    return 0;
}


void print(const list<int> &lst)
{
    for (const auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}
