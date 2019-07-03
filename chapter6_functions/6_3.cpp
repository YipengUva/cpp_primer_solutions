#include <iostream>

using namespace std;

int fact_yp(int num){
    if(num < 0)
        throw runtime_error("input is negative.");

    int out = 1;

    if(num > 0){
        for(int i = 1; i <= num; ++i){
            out *= i;
        }
    }

    return out;
}


int main()
{
    int num = 5;
    std::cout << "fact of " << num
              << " is: " << fact_yp(num) << endl;

    return 0;
}
