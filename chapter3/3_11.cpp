#include <iostream>

using namespace std;

int main()
{
    const string s = "Keep out";

    for(auto &c : s){
        cout << c << endl;
    }

    for(const char &c : s){
        cout << c << endl;
    }

    return 0;
}
