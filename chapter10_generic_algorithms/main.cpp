#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

void print(list<string> &);

void elimDups(list<string> &words)
{
words.sort();
print(words);

words.unique();
print(words);
}

int main()
{
    list<string> words = {"yipeng", "song", "yipeng", "song", "Amsterdam"};
    print(words);

    elimDups(words);

    return 0;
}


void print(list<string> &lst)
{
    for(auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}
