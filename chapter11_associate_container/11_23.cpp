#include <iostream>
#include <map>
#include <set>
#include <string>
#include <iterator>
#include <algorithm>
#include <list>
#include <functional>
#include <vector>

using namespace std;

typedef multimap<string, vector<string> > Family;

void addName(Family &familes,
             const string &name);

void addChildren(Family &familes,
                 const string &name,
                 const vector<string> &children);

void print(const vector<string> &strs);

int main()
{
    Family familes;
    addChildren(familes, "song", {"yipeng", "yipeng2", "yipeng3"});
    addChildren(familes, "song", {"yipeng5", "yipeng2", "yipeng3"});

    for(const auto &ele : familes){
        cout << ele.first << " : ";
        print((ele.second));
    }

    return 0;
}

void addChildren(Family &familes,
                 const string &name,
                 const vector<string> &children)
{
    familes.insert({name, children});
}

void print(const vector<string> &strs)
{
    for (const auto &ele : strs){
        cout << ele << " ";
    }
    cout << endl;
}
