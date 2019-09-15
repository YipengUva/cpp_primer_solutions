#include <iostream>

using namespace std;

double abs_yp(double num){
    if(num > 0)
        return num;
    else
        return -num;
}


int main()
{
    int num;
    cout << "user input: ";
    cin >> num;
    std::cout << "abs of " << num
              << " is: " << abs_yp(num) << endl;

    return 0;
}
