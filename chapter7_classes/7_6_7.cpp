#include <iostream>
#include <string>

using namespace std;

struct Sales_data {

    std::string isbn() const {return this->bookNo;}
    Sales_data& combine(const Sales_data &);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();

    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}

double Sales_data::avg_price() const{
    if(units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

int main()
{
    Sales_data total; // variable to hold data for the next transaction
    // read the first transaction and ensure that there are data to process
    if (read(cin, total)) {
        Sales_data trans; // variable to hold the running sum
        // read and process the remaining transactions
        while (read(cin, trans) ) {
        // if we're still processing the same book
        if (total.isbn() == trans.isbn() ){
                total.combine(trans);
        }else {
            // print results for the previous book
            print(cout, total);
            total = add(total, trans);
        }
        }
           print(cout, total);
          // print the last transaction
        } else {
        // no input! warn the user
        cerr << "No data?!" << endl;
            return -1; // indicate failure
        }
        return 0;
}
