#include<iostream>
using namespace std;
int main () {
    float a=5.6;
    int b=a;
    float c=2.2;
    c++;
    a=--b;
    b=c--;
    cout<<"a:"<<a++<<endl;
    cout<<"b:"<<++b<<endl;
    cout<<"a:"<<a<<endl;
    cout<<"c:"<<c<<endl;
    return 0;

}