#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

bool compare2(const list<int> &x, const vector<int> &y){
    bool out = true;

    if (x.size() != y.size()){
        out = false;
        return out;
    }

    auto x_beg = x.begin();
    auto y_beg = y.begin();

    while(x_beg != x.end() && y_beg != y.end()){
        if(*x_beg != *y_beg)
            out = false;

        ++x_beg;
        ++y_beg;
    }

     return out;
}


int main()
{
    list<int> ls = {1, 2, 3, 4, 5, 65, 100};
    vector<int> v = {1, 2, 3, 4, 5, 65, 100};

    cout << compare2(ls, v) << endl;

    return 0;
}
