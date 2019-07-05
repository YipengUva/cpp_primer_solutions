#include <iostream>
#include <list>
#include <deque>
#include <vector>

using namespace std;

vector<int>::iterator search2(const vector<int> &x,
             int y,
             vector<int>::iterator beg,
             vector<int>::iterator ed)
{
    while(beg != ed)
    {
        if(*beg == y)
            break;
        ++beg;
    }

    if(beg == ed)
        cerr << "element is not found, the input end iterator is returned. \n";

    return beg;
}


int main()
{
    vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int y = 3;

    auto beg = x.begin();
    auto ed = beg + 5;

    cout << *(search2(x, y, beg, ed)) << endl;
    cout << *(search2(x, 20, beg, ed)) << endl;

    return 0;
}
