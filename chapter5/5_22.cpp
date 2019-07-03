#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){
    int sz;

    while(cin >> sz){
        if (sz <= 0){
            std::cout << "using positive input: ";
            continue;
        }else
            break;
    }
    std::cout << "input: " << sz << endl;

    return 0;

}
