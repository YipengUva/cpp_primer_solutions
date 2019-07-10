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
    map<string, int> word_cout = {
                                 {"yipeng", 10},
                                 {"song", 20},
                                 {"peng", 30},
                                 };

    map<string, int>::const_iterator map_it = word_cout.cbegin();

    while (map_it != word_cout.cend()) {
        // dereference the iterator to print the element key--value pairs
        cout << map_it->first << " occurs "
            << map_it->second << " times" << endl;
    ++map_it; // increment the iterator to denote the next element
    }

    return 0;
}
