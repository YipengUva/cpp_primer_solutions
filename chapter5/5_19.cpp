#include <iostream>
#include <vector>
#include <assert.h>
#include <string>

using namespace std;

int main(){

    do{
        string s1, s2;
        cout << "Please enter two strings to compare: ";
        if (cin >> s1 >> s2){
            string s = (s1.size() < s2.size()) ? s1 : s2;
            cout << s << " is less than the other one \n";
        }
    }while(cin);

    return 0;

}
