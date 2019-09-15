#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    string word;
    deque<string> dvec;

    while(cin >> word){
        dvec.push_back(word);
    }

    for(auto beg = dvec.begin(); beg != dvec.end(); ++beg){
        cout << *beg << ' ';
    }

    return 0;
}
