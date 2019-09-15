#include <iostream>
#include <string>
//#include "chapter6.h"

using namespace std;

void swap_ptr(int *x_ptr, int *y_ptr)
{
    auto tmp = x_ptr;

    x_ptr = y_ptr;
    y_ptr = tmp;
}

int main()
{
    int x = 10;
    int y = 20;
    swap_ptr(&x, &y);

    cout << x << ' ' << y << endl;

    return 0;
}
