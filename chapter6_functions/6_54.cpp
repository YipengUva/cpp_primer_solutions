#include <iostream>
#include <string>
#include <cassert>
//#include "chapter6.h"

using namespace std;

int sum2(int x, int y)
{
    return x + y;
}

typedef int (*sum_fun)(int, int);

int main() {
    vector<sum_fun> funs;

    return 0;
}
