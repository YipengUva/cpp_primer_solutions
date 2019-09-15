#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <iterator>

#include "Sales_data.h"

using namespace std;

bool compareIsbn(Sales_data &data1, Sales_data &data2){
    return data1.isbn() < data2.isbn();
}

void print(vector<Sales_data> &dataSets){
    for(auto &ele : dataSets){
        print(cout, ele);
        cout << endl;
    }
    cout << endl;
}

int main()
{
    vector<Sales_data> dataSets;
    Sales_data data;

    while(read(cin, data)){
        dataSets.push_back(data);
    }
    print(dataSets);

    sort(dataSets.begin(), dataSets.end(), compareIsbn);
    print(dataSets);

    return 0;
}
