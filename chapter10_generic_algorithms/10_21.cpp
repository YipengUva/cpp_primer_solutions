#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

void fool(vector<int> &vec)
{
    int val = *(vec.end()-1);
    cout << val << endl;

    auto f = [&val] () ->bool
             { return val == 0; };

    while(val >= 0){
        cout << val << " "
             << f() << " bool state of val == 0" << endl;
        --val;
    }

}

int main()
{
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    fool(vec);

    return 0;
}


