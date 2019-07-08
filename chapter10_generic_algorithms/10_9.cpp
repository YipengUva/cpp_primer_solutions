#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

void print(vector<string> &words){
    for(auto &ele : words){
        cout << ele << " ";
    }

    cout << endl;
}

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    cout << "sorted seq: ";
    print(words);

    auto end_unique = unique(words.begin(), words.end());
    cout << "unique seq: ";
    print(words);

    words.erase(end_unique, words.end());
    cout << "seq after erase duplicated elements: ";
    print(words);
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    cout << "original seq: ";
    print(words);

    elimDups(words);

    return 0;
}
