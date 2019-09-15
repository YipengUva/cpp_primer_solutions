#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

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

    stable_sort(words.begin(), words.end(), isShorter);
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    print(words);

    elimDups(words);
    print(words);

    return 0;
}
