#include <iostream>

using namespace std;

int main()
{
    string sum_str;
    string word;

    while(cin >> word){
        sum_str += (word + " ");
        cout << sum_str << endl;
    }

    return 0;
}
