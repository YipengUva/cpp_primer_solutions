#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>
#include <functional>

using namespace std;

void print(list<string> &);
void print(vector<int> &);

void elimDups(list<string> &words)
{
words.sort();
print(words);

words.unique();
print(words);
}

int main()
{
    vector<int> vec = {12, 23, 19, 42, 89};
    auto val = accumulate(vec.cbegin(), vec.cend(), 1000);
    cout << val << endl;

    vector<string> vec2 = {"test", "yipeng", "song"};
    auto val2 = accumulate(vec2.cbegin(), vec2.cend(), string(", "));
    cout << val2 << endl;

    vector<int> vec3 = {0, 0, 0, 0, 0};
    fill(vec3.begin(), vec3.end(), 100);
    print(vec3);

    return 0;
}


void print(list<string> &lst)
{
    for(auto &ele : lst){
        cout << ele << " ";
    }
    cout << endl;
}

void print(vector<int> &vec)
{
    for(auto &ele : vec){
        cout << ele << " ";
    }
}
