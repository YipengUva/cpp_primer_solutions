#include <string>
#include <iostream>
#include <memory>

using namespace std;

class HasPtr {
public:
    HasPtr(const std::string &s = std::string()):
    ps( make_shared<string>(s) ), i(0) { }
    shared_ptr<string> get() const { return this->ps; }

    // copy constructor
    HasPtr(const HasPtr &hasptr)
        : ps(hasptr.ps), i(hasptr.i)
    {
    }

    // copy assignment
    HasPtr& operator=(const HasPtr &hasptr){
        ps = hasptr.ps;
        i = hasptr.i;

        return *this;
    }

private:
    shared_ptr<string> ps;
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
