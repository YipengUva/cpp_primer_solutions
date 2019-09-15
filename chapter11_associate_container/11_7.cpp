#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

typedef map<string, vector<string> > Family;

void addName(Family &familes,
             const string &name);

void addChildren(Family &familes,
                 const string &name,
                 const vector<string> &children);

void print(const vector<string> &strs);

int main()
{
    Family familes;
    addName(familes, "Song");
    addChildren(familes, "song", {"yipeng", "yipeng2", "yipeng3"});

    addName(familes, "Song2");
    addChildren(familes, "song2", {"yipeng", "yipeng2", "yipeng3"});

    for(const auto &ele : familes){
        cout << ele.first << " : ";
        print((ele.second));
    }

    return 0;
}

void addName(Family &familes,
             const string &name)
{
    familes[name];
}

void addChildren(Family &familes,
                 const string &name,
                 const vector<string> &children)
{
    familes[name] = children;
}

void print(const vector<string> &strs)
{
    for (const auto &ele : strs){
        cout << ele << " ";
    }
    cout << endl;
}
