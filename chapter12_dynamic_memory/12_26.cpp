#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

int main()
{
    int n = 10;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    string s;
    auto q = p;
    while(cin >> s && q != p + n){
        alloc.construct(q++, s);
        cout << s << endl;
    }

    while (q != p)
        alloc.destroy(--q);

    return 0;
}
