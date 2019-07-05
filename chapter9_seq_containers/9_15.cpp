#include <iostream>
#include <list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

bool compare2(const vector<int> &x, const vector<int> &y){
    bool out = true;

    if (x.size() != y.size()){
        out = false;
        return out;
    }

    for(int i = 0; i < x.size(); ++i){
        if(x[i] != y[i])
            out = false;
    }

     return out;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 65, 100};
    vector<int> v2 = {1, 2, 3, 4, 5, 65, 100};

    cout << compare2(v1, v2) << endl;


    //list<int> ls = {1, 2, 3, 4, 5, 65, 100};


    return 0;
}
