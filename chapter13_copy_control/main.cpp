#include <string>
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

using namespace std;

class HasPtr {
    friend inline void swap(HasPtr &lhs, HasPtr &rhs){
        cout << "swap is executed" << endl;
        using std::swap;
        swap(lhs.ps, rhs.ps);
        swap(lhs.i, rhs.i);
    }

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

    // < operator
    bool operator<(const HasPtr &rhs){
        return ps->size() < rhs.ps->size();
    }

    inline void swap(HasPtr &rhs){
        cout << "swap is executed" << endl;
        using std::swap;
        swap(ps, rhs.ps);
        swap(i, rhs.i);
    }

private:
    shared_ptr<string> ps;
    int i;
};

int main(){
    HasPtr hp1("Yipeng");
    HasPtr hp2("Song");
    HasPtr hp3("Randomness");

    vector<HasPtr> vec_hs = {hp1, hp2, hp3};

    for(auto &ele : vec_hs){
        cout << *ele.get() << endl;
    }

    sort(vec_hs.begin(), vec_hs.end());
    for(auto &ele : vec_hs){
        cout << *ele.get() << endl;
    }

    return 0;
}
