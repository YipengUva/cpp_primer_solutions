#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item book;

    cout << "Enter ISBN, number of copies, and sales price: ";
    while(cin >> book){
        cout << book << endl;
    }

    return 0;
}
