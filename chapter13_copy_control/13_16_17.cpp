#include <string>
#include <iostream>

using namespace std;

class numbered{
private:
    static int sn;

public:
    int mysn;

    // default constructor
    numbered()
        : mysn(++sn)
    {
    }

    // copy constructor
    numbered(const numbered &)
        : mysn(++sn)
    {
    }
};

int numbered::sn = 0;


void f(const numbered &s)
{
    cout << s.mysn << endl;
}


int main(){
    numbered a, b = a, c = b, d;
    f(a); f(b); f(c); f(d);

    return 0;
}
