#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    string word;
    list<string> lvec;

    while(cin >> word){
        lvec.insert(lvec.end(), word);
    }

    for(auto beg = lvec.begin(); beg != lvec.end(); ++beg){
        cout << *beg << ' ';
    }

    return 0;
}
