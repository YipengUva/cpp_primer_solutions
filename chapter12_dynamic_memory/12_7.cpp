#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

shared_ptr<vector<int> > dynamic_vec()
{
    return make_shared<vector<int> >();
}

void read(istream &is, shared_ptr<vector<int> > pv)
{
    int tmp = 0;
    while(is >> tmp){
        pv->push_back(tmp);
    }
}

void print(shared_ptr<vector<int> > pv)
{
    for(size_t i = 0; i < (pv->size()); ++i)
        cout << pv->at(i) << " ";
    cout << endl;
}

int main()
{
    shared_ptr<vector<int> > pv = dynamic_vec();
    pv->push_back(10);
    cout << pv->at(0) << endl;

    read(cin, pv);
    print(pv);

    return 0;
}







