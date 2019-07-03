#include <iostream>
#include <vector>
#include <assert.h>
#include <string>
#include <stdexcept>

using namespace std;

int main(){
    int var1, var2;
    std::cout << "input two integers, and return its divid: ";

    cin >> var1 >> var2 ;

    if(var2 == 0)
        throw runtime_error("the dividend is 0");


    int out = var1 / var2;

    std::cout << "output: " << out << endl;
    return 0;
}
