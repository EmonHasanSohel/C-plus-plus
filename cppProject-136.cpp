#include<iostream>
using namespace std;
int main (){
    float a=1.1,b=2.1,c=3.1,d=4.1,e=5.1,sum;
    //sum=a+b+c+d+e;
    cout<<"Sum:"<<a+b+c+d+e<<endl;
    cout<<"Avg:"<<(a+b+c+d+e)/5<<endl;

    cout<<"*"<<endl;
    cout<<"* *"<<endl;
    cout<<"* * *"<<endl;
    cout<<"* * * *"<<endl;
    cout<<"* * * * *"<<endl;

    char p=65;
    int q=p+2;
    float r=q+3.1;
    cout<<"a:"<<p<<endl;
    cout<<"b:"<<q<<endl;
    cout<<"c:"<<r<<endl;

    int x=15;
    int y=11;
    int z=7;
    cout<<"Result1:"<<x+y-z<<endl;
    cout<<"Result2:"<<x-y+z<<endl;
    cout<<"Result3:"<<x*y+z<<endl;
    cout<<"Result4:"<<x+y*z<<endl;
    cout<<"Result5:"<<x*y-z<<endl;
    cout<<"Result6:"<<x-y*z<<endl;
    cout<<"Result7:"<<x/y*z<<endl;
    cout<<"Result8:"<<x*y/z<<endl;
    cout<<"Result9:"<<x/y+z<<endl;
    cout<<"Result10:"<<x+y/z<<endl;

  return 0;  
}