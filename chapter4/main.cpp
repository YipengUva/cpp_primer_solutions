#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    string name = "YipengSong";
    string *p1 = &name;

    cout << p1->size() << endl;

    string *p2 = &name;
    cout << (*p2).size() << endl;

    return 0;
}
