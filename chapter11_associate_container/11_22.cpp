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

void print(const vector<int> &numbers);

int main()
{
    map<string, vector<int> > word_numbers;
    auto ret = word_numbers.insert({"song", {1, 2, 3} });
    pair<map<string, vector<int> >::iterator, bool> ret2 =
               word_numbers.insert({"yipeng", {1, 2, 3} });

    for(const auto &ele : word_numbers){
        cout << ele.first << ": ";
        print(ele.second);
    }

    return 0;
}

void print(const vector<int> &numbers)
{
    for(const auto &ele : numbers){
        cout << ele << " ";
    }
    cout << endl;
}

