#include <iostream>
#include <cmath>

using namespace std;

void compare_abcd(int a, int b, int c, int d){
    if((c>d) && (b>c) && (a>b)){
        cout << "follow the rule \n";
    }else{
        cout << "not ture" << endl;
    }
}

int main()
{
    int a = 13;
    int b = 12;
    int c = 19;
    int d = 10;
    compare_abcd(a,b,c,d);

    return 0;
}
