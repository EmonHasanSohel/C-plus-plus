#include<iostream>
using namespace std;
void Sum(int a, int b){
    int add=a+b;
    cout<<"Sum:"<<add<<endl;
}
void Sub(int a, int b){
    int sub=a-b;
    cout<<"Sub:"<<sub<<endl;
}
void Mult(int a, int b){
    int mult=a*b;
    cout<<"Mult:"<<mult<<endl;
}
void Dvi(int a, int b){
    int dvi=a/b;
    cout<<"Dvi:"<<dvi<<endl;
}
int main(){
    Sum(10,15);
    Sub(20,10);
    Mult(5,7);
    Dvi(15,3);

}