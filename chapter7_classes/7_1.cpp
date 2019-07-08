#include <iostream>
#include <string>

using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};


int main()
{
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
        // if we're still processing the same book
        if (total.bookNo == trans.bookNo){
            total.revenue += trans.revenue; // update the running total
            total.units_sold += trans.units_sold;
        }else {
            // print results for the previous book
            cout << total.bookNo << ' ' << total.units_sold
                 << ' ' << total.revenue << endl;
            total.bookNo = trans.bookNo; // total now refers to the next book
            total.revenue = trans.revenue;
            total.units_sold = trans.units_sold;
        }
        }
           cout << total.bookNo << ' ' << total.units_sold
                 << ' ' << total.revenue << endl;
          // print the last transaction
        } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
            return -1; // indicate failure
        }
        return 0;
}