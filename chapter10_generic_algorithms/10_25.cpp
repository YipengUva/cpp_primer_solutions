#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

void print(vector<string> &words){
    for(auto &ele : words){
        cout << ele << " ";
    }

    cout << endl;
}

bool check_size(string &s, size_t sz)
{
    return s.size() > sz;
}

auto check_size5 = bind(check_size, std::placeholders::_1, 5);

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());

    auto end_unique = unique(words.begin(), words.end());

    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words)
{
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [] (const string &a, const string &b)
                    {return a.size() < b.size();});
    auto wc = stable_partition(words.begin(), words.end(), check_size5);
    print(words);

    auto count = wc - words.begin();
    cout << count << " " << "words"
         << " of length " << 5 << " or longer" << endl;

    for_each(wc, words.end(),
             [] (const string &s) { cout << s << " "; } );
    cout << endl;
}

int main()
{
    vector<string> words = {"the", "quick", "red", "fox", "jumps",
                            "over", "the", "slow", "red", "turtle"};
    print(words);

    biggies(words);

    return 0;
}






