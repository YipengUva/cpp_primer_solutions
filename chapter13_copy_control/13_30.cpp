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

    inline void swap(HasPtr &rhs){
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
        cout << "swap is executed" << endl;
    }

private:
    shared_ptr<string> ps;
    int i;
};

int main(){
    HasPtr hp1("Yipeng");
    HasPtr hp2("Song");
    cout << hp1.get() << endl;
    cout << hp2.get() << endl;

    hp1.swap(hp2);
    cout << hp1.get() << endl;
    cout << hp2.get() << endl;

    return 0;
}
