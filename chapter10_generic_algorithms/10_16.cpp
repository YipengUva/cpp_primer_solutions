#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

#include "Sales_data.h"

using namespace std;

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

void print(vector<string> &words){
    for(auto &ele : words){
        cout << ele << " ";
    }

    cout << endl;
}

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words,
             vector<string>::size_type sz)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &a, const string &b)
                    {return a.size() < b.size();});

    auto wc = find_if(words.begin(), words.end(),
                      [sz] (const string &a)
                      { return a.size() >= sz;} );

    auto count = words.end() - wc;
    cout << count << " " << "words"
         << " of length " << sz << " or longer" << endl;

    for_each(wc, words.end(),
             [] (const string &s) { cout << s << " "; } );
    cout << endl;
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    print(words);

    biggies(words, 5);

    return 0;
}
