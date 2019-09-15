#include <iostream>
#include <string>
#include <vector>
#include <cassert>
//#include "chapter6.h"

using namespace std;

int add2(int x, int y)
{
    return x + y;
}

int sub2(int x, int y)
{
    return x - y;
}

int mul2(int x, int y)
{
    return x * y;
}

int div2(int x, int y)
{
    return x / y;
}

typedef int (*arith_fun)(int, int);

int main() {
    vector<arith_fun> funs = {add2, sub2, mul2, div2};

    int x = 10, y = 20;

    for(auto fun : funs)
        cout << fun(x, y) << endl;

    return 0;
}
