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
        auto ret = word_count.insert({word, 1});

        if(!ret.second)
            word_count[word] += 1;
    }

    for (const auto &w : word_count) // for each element in the map
        cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
