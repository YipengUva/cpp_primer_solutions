#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two strings: ";
    string st1, st2;
    cin >> st1 >> st2;

    if(st1.size() == st2.size()){
        cout << "equal size";
    }else if(st1.size() > st2.size()){
        cout << "string " << st1 << " is longer" << endl;
    }else{
        cout << "string " << st2 << "is longer" << endl;
    }

    return 0;
}
