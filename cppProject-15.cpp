
#include<iostream>
using namespace std;
int main() {
    int a=2;
    int b=2;
    int p=++a;
    int q=a++;
    int r=--a;
    int s=a--;

    cout<<"a:"<<p<<endl;
    cout<<"b:"<<q<<endl;
    cout<<"c:"<<r<<endl;
    cout<<"d:"<<s<<endl;

    cout<<"a:"<<++b<<endl;
    cout<<"b:"<<b++<<endl;
    cout<<"c:"<<--b<<endl;
    cout<<"d:"<<b--<<endl;
}




