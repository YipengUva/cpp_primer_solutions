#include <iostream>
#include <cmath>

using namespace std;

void int_even(int x){
    if((x % 2) == 0)
        cout << "Input x is even \n";
    else
        cout << "Input x is odd \n";
}

int main()
{
    int x = 12;
    int_even(x);

    return 0;
}
