#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    vector<int> ivec = {1, 2, 3, 4, 5, 56, 100};
    map <vector<int>::iterator, int> emp = {
                                            {ivec.begin(), 1000},
                                            {ivec.begin() + 5, 2000},
                                           };
    list<int> ilst = {1, 2, 3, 4, 5, 56, 100};

    /*
    map <list<int>::iterator, int> emp2 = {
                                            {ilst.begin(), 1000},
                                            {ilst.begin() + 5, 2000},
                                           };
    */

    // list<int>::iterator only defines !=, ==, ++, --. < operation is not
    // defined.

    return 0;
}
