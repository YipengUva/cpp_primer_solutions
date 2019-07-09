#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <utility>

using namespace std;

typedef map<string, vector< pair<string, string> > > Family;

void addName(Family &familes,
             const string &name);

void addChildren(Family &familes,
                 const string &name,
                 const vector< pair<string, string> > &children);

int main()
{
    Family familes;
    addName(familes, "Song");


    addChildren(familes, "song", { {"yipeng", "1999"}, {"yipeng2", "1988"}, {"yipeng3", "1977"} });

    addName(familes, "Song2");
    addChildren(familes, "song2", { {"yipeng", "1999"}, {"yipeng2", "1988"}, {"yipeng3", "1977"} });


    return 0;
}

void addName(Family &familes,
             const string &name)
{
    familes[name];
}

void addChildren(Family &familes,
                 const string &name,
                 const vector< pair<string, string> > &children)
{
    familes[name] = children;
}

