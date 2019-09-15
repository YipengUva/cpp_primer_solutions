#include <iostream>
#include <string>
//#include "chapter6.h"

using namespace std;

void printij(int i, int *j, int j_size)
{
    cout << "i: " << i << endl;

    cout << "j: ";
    for(int i = 0; i != j_size; ++i){
        cout << *j++ << ' ';
    }
    cout << endl;
}

void printij(int i, const int *j_beg, const int *j_end)
{
    cout << "i: " << i << endl;

    cout << "j: ";
    while ( j_beg != j_end)
        cout << *j_beg++ << ' ';
    cout << endl;
}

void printij(int i, int (&arr)[2])
{
    cout << "i: " << i << endl;

    cout << "j: ";
    for (auto ele : arr)
        cout << ele << ' ';
    cout << endl;
}


int main()
{
    int i = 0;
    int j[2] = {0, 1};

    printij(i, j, 2);
    printij(i, begin(j), end(j));
    printij(i, j);

    return 0;
}
