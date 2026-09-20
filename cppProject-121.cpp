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
    account a[3];
    for(int i=0; i<3; i++){
    a[i].set_accinfo();
    a[i].print_accinfo();
    a[i].deposit();
    a[i].withdraw();
    cout << "After deposit and withdraw operations"<<endl;
    a[i].print_accinfo();
    }

    
}