#include <string>
#include <iostream>

using namespace std;

class numbered{
private:
    static int sn;

public:
    int mysn;

    numbered()
        : mysn(++sn)
    {
    }
};

int numbered::sn = 0;


void f(numbered s)
{
    cout << s.mysn << endl;
}


int main(){
    numbered a, b = a, c = b, d;
    f(a); f(b); f(c); f(d);

    return 0;
}



class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
    ps(new std::string(s)), i(0) { }
    string* get() const { return this->ps; }

    // copy constructor
    HasPtr(const HasPtr &hasptr)
        : ps(new string(*hasptr.get())), i(0)
    {
    }

    ~HasPtr() { delete ps; }

    // copy assignment
    HasPtr& operator=(const HasPtr &hasptr){
        ps = new string(*hasptr.get());
        i = 0;

        return *this;
    }

private:
    std::string *ps;
    int i;
};

