#include <string>
#include <iostream>

using namespace std;

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

int main(){
    HasPtr hp1("Yipeng");


    cout << hp1.get() << endl;

    HasPtr hp2(hp1);
    cout << hp2.get() << endl;

    HasPtr hp3 = hp1;
    cout << hp3.get() << endl;

    return 0;
}
