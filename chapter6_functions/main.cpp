#include <iostream>
#include <string>

using namespace std;

class Sales_data
{
private:
    /* data */
public:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const 
    {
        return this->bookNo;
    }

    Sales_data& combine(const Sales_data&);
    double avg_price() const;


    Sales_data(/* args */);
    ~Sales_data();
};

double Sales_data::avg_price() const {
    if(units_sold)
        return revenue/units_sold;
    else
        return 0;    
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}


ostream &print(ostream&, const Sales_data&);
istream &read(istream&, Sales_data&);

istream &read(istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data&item)
{
    

}






void swap(int &v1, int&v2)
{
    if(v1 == v2){
        return;
    }
    int tmp = v2;
    v2 = v1;
    v1 = tmp;
}

int main()
{
    void (*pf)(int &, int &);

    pf = &swap;

    int v1 = 10;
    int v2 = 100;
    (*pf)(v1, v2);
    cout << v1 << " " << v2 << endl;

    return 0;
}
