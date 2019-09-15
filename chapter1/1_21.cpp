#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item item1, item2;
    cout << "Enter two set of ISBN, number of copies, and sales price: ";
    cin >> item1 >> item2;

    if(item1.isbn()==item2.isbn()){
        cout << "Sum of item1 and item2: "
             << item1 + item2 << endl;
    } else{
        cout << "They don't have the same ISBN.";
    }

    return 0;
}
