#include <iostream>
#include <string>
//#include "chapter6.h"

using namespace std;

int sum_list(initializer_list<int> int_ls){
    int out = 0;

    for(auto &ele : int_ls){
        out += ele;
    }

    return out;
}

int main()
{
    initializer_list<int> int_ls = {0, 1, 2, 3, 4, 10, 100};
    cout << "sum of the list: " << sum_list(int_ls) << endl;

    return 0;
}
