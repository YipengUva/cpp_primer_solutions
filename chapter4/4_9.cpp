#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const char *cp = "Hello World";
    if(cp && *cp){
        cout << "pass the test" << endl;
    }

    cout << *cp << endl;

    return 0;
}
