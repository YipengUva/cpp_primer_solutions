#include <iostream>
#include <fstream>
#include <list>
#include <forward_list>
#include <deque>
#include <vector>
#include <array>

using namespace std;

int main()
{
    vector<int> vec1;

    // add 16 elements
    for(int i=1; i <= 16; ++i){
        vec1.push_back(i);
    }
    cout << "size: " << vec1.size() << " ;"
         << " capacity: " << vec1.capacity() << endl;

    // add one more element
    vec1.push_back(11);
    cout << "size: " << vec1.size() << " ;"
         << " capacity: " << vec1.capacity() << endl;

    return 0;
}
