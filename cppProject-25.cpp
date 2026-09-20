#include <iostream>
using namespace std;
int main () {
    int num1,num2;
    char op;
    cout<<"Enter the two number:";
    cin>>num1>>num2;
    cout<<"Which operation do you parform you?"<<endl;
    cin>>op;

    if(op=='+'){
        int add=num1+num2;
        cout<<"Addition Result:"<<add<<endl;

    }
    else if(op=='-'){
        int sub=num1-num2;
        cout<<"Subtraction Result:"<<sub<<endl;

    }
    else if(op=='*'){
        int mult=num1*num2;
        cout<<"Muitiplication Result:"<<mult<<endl;

    }
    else if(op=='/'){
        int dvi=num1/num2;
        cout<<"Division Result:"<<dvi<<endl;

    }
    else{
        cout<<"Invalid Operator"<<endl;
    }
    return 0;
    


}