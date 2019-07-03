#include <iostream>
#include <vector>
#include <assert.h>
#include <string>
#include <stdexcept>

using namespace std;

int main(){
    int var1, var2;
    std::cout << "input two integers, and return its divid: ";

    while(cin >> var1 >> var2){
        try{
            if(var2 == 0)
                throw runtime_error("the dividend is 0");
        }catch(runtime_error err){
            cout << err.what()
                 << "\nTry Again? Enter y or n" << endl;
            char c;
            cin >> c;
            if(!cin || c == 'n')
                break;
            else
                std::cout << "input two integers, and return its divid: ";
        }
    }

    int out = var1 / var2;

    std::cout << "output: " << out << endl;

    return 0;
}
