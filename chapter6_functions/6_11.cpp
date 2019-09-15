#include <iostream>
//#include "chapter6.h"

using namespace std;

void reset(int &num);

int main(){

    int num2 = 30;
    cout << "Before reset: num: " << num2 << endl;

    reset(num2);

    cout << "After reset: num: " << num2 << endl;

    return 0;
}

void reset(int &num)
{
    num = 0;
}
