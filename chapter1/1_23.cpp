#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item currItem, val;

    cout << "Enter a series of transactions: \n";

    if(cin >> currItem){
        int cnt = 1;
        while(cin >> val){
            if(val.isbn()==currItem.isbn()){
                ++cnt;
            }else{
                cout << currItem.isbn() << " has " << cnt << " transactions" << endl;
                currItem = val;
                cnt = 1;
            }
        }
        cout << currItem.isbn() << " has " << cnt << " transactions" << endl;
    }

    return 0;
}
