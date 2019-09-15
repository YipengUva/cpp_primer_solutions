#include <iostream>
#include <vector>
#include <assert.h>
#include <string>
#include <stdexcept>

using namespace std;

int main(){
    int sum = 0;
    int val = 0;

    while(val <= 100){
        sum += val;
        ++val;
    }

    cout << sum << endl;

    return 0;
}
