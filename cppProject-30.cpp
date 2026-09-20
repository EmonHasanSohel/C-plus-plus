#include <iostream>
using namespace std;
int main() {
    float num1,num2;
    cout<<"Enter Two Number:";
    cin>>num1>>num2;
    char op;
    cout<<"Which operation do you want to perform? "<<endl;
    cin>>op;

    float add,sub,mult,dvi;
    switch (op){
    case '+':
    add=num1+num2;
    cout<<"Addition Result:"<<add<<endl;
        break;
    
    case '-':
    sub=num1-num2;
    cout<<"Subtraction Result:"<<sub<<endl;
        break;
    case '*':
    mult=num1*num2;
    cout<<"Multiplication Result:"<<mult<<endl;
        break;
    case '/':
    dvi=num1/num2;
    cout<<"Division Result:"<<dvi<<endl;
        break;

    default:
    cout<<"Invalid Operator"<<endl;
    }

}