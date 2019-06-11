#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<int> int_exp = {1,2,3,4,5,6,7,8,9,10};

    for(auto iter = int_exp.begin();
             iter != int_exp.end();
             ++iter){
        if((*iter) % 2 != 0)
            *iter *= *iter;
    }
    cout << int_exp[2] << endl;

    return 0;
}
