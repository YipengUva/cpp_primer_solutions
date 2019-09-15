#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <utility>

using namespace std;

int main()
{
    multiset<string> c;
    vector<string> v = {"yipeng", "song", "peng"};

    copy(v.begin(), v.end(), inserter(c, c.end()));
    //copy(v.begin(), v.end(), back_inserter(c));

    multiset<string> c2 = {"yipeng", "song", "peng"};
    vector<string> v2;
    copy(c2.begin(), c2.end(), inserter(v2, v2.end()));
    copy(c2.begin(), c2.end(), back_inserter(v2));

    return 0;
}

