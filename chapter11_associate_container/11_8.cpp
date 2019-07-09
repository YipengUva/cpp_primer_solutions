#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    map<string, size_t> word_count;
    vector<string> exclude = {"The", "But", "And", "Or", "An", "A",
                           "the", "but", "and", "or", "an", "a"};
    // in this case, using set has the advantage of avoiding duplications.

    string word;

    while(cin >> word){
        auto wc = find(exclude.begin(), exclude.end(), word);
        if (wc == exclude.cend())
            ++word_count[word];
    }

    for(const auto &w : word_count)
        cout << w.first << " occurs " << w.second << endl;

    return 0;
}
