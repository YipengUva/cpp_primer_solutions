#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <list>
#include "StrBlob.h"

using namespace std;

vector<int>* dynamic_vec()
{
    return new vector<int>;
}

void read(istream &is, vector<int> *pv)
{
    int tmp = 0;
    while(is >> tmp){
        pv->push_back(tmp);
    }
}

void print(vector<int> *pv)
{
    for(size_t i = 0; i < (pv->size()); ++i)
        cout << pv->at(i) << " ";
    cout << endl;
}

int main()
{
    vector<int> *pv = dynamic_vec();
    read(cin, pv);
    print(pv);

    delete pv;

    return 0;
}







