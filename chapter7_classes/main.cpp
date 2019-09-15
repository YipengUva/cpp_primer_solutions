#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account;

int main()
{
    Account ac1;
    Account *ac2 = &ac1;

    return 0;
}

class Account
{
public:
    void calculate() {amount += amount * interestRate;}
    static double rate() {return interestRate; }
    static void rate(double r): interestRate(r) {}

private:
    std::string owner;
    double amount;
    static constexpr double interestRate = 0.98;

    static double initRate();
};
