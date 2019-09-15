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
    for(auto iter = word_cout.begin(); iter != word_cout.end(); ++iter){
        iter->second += 100;
    }

    for(auto &ele : word_cout){
        cout << ele.first << " " << ele.second << endl;
    }

    return 0;
}

