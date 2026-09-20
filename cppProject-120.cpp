#include <iostream>
using namespace std;
struct account {
    string AccNo;
    string AccName;
    double balance;
    void set_accinfo();
    void print_accinfo();
    double deposit();
    double withdraw();
};
void account::set_accinfo() {
    cout << "Enter Account Number:";
    cin >> AccNo;
    cout << "Enter Account holder name:";
    cin >> AccName;
    cout << "Enter current balance:";
    cin >> balance;
}
void account::print_accinfo() {
    cout << "Account number: " << AccNo << endl;
    cout << "Holder name: " << AccName << endl;
    cout << "Balance: " << balance << endl;
}
double account::deposit() {
    double amount;
    cout << "Enter deposit amount: ";
    cin >> amount;
    balance = balance + amount;
    return balance;
}
double account::withdraw() {
    double amount;
    cout << "Enter withdrawal amount: ";
    cin >> amount;
    balance = balance - amount;
    return balance;
}
int main() {
    account a1;
    a1.set_accinfo();
    a1.print_accinfo();
    a1.deposit();
    a1.withdraw();
    cout << "After deposit and withdraw operations"<<endl;
    a1.print_accinfo();

    account a2;
    a2.set_accinfo();
    a2.print_accinfo();
    a2.deposit();
    a2.withdraw();
    cout << "After deposit and withdraw operations"<<endl;
    a2.print_accinfo();
}