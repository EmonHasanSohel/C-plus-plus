#include<iostream>
using namespace std;
//Constructor, Destructor
class A{
    int a;
public:
    A(){
    cout<<"Constructor Called"<<endl;
    cout<<"Enter a:";
    cin>>a;
    }
    void Method_A(){
    cout<<"Method Called"<<endl;
    }
    ~A(){
    cout<<"Destructor Called "<<a<<endl;
    }
 
};
int main(){
   A A1; //a=5
   A A2; //a=10
}