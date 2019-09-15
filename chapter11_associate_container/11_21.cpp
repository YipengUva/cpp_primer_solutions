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

int main()
{

    map<string, size_t> word_count; // empty map from string to size_t
    string word;
    while (cin >> word){
        ++word_count.insert({word, 0}).first->second;
    }

    for (const auto &w : word_count) // for each element in the map
        cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
