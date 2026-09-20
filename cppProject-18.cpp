#include <iostream>
using namespace std;
int main () {
    int a=6;
    int b=a++;
    cout<<"a:"<<a<<endl;
    a--;
    int c=--a;
    cout<<"a:"<<a<<endl;
    cout<<"c:"<<c<<endl;
    return 0;
}