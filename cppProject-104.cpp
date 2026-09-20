#include <iostream>
using namespace std;
int main(){
    int a=5;
    //int *xyz=&zyx;
    int *ptr=&a;
    cout<<"Address of a :"<<&a<<endl;
    cout<<"Address of a using a pointer:"<<ptr<<endl;
    cout<<"Value of a :"<<a<<endl;
    cout<<"Address of pointer:"<<&ptr<<endl;
    cout<<"Value of a using pointer :"<<*ptr<<endl;

}