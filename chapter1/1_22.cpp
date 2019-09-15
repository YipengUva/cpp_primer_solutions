#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item book;
    cout << "Enter a set of ISBN, number of copies, and sales price: \n";

    Sales_item Sum;
    while(cin >> book){
        Sum = Sum + book;
    }
    cout << "The sum equals: " << Sum << endl;

    return 0;
}
