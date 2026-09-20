//Create a function called PosNeg(int num) which will check whether a number is positive or negative. 
//If a number is positive then it will print "The number is a positive number" and
// will call a function namely EvenOdd(int num) which will find out whether the number is Even or ODD.
//Otherwise, the PosNeg() function will print "The number is a negative number".
#include<iostream>
using namespace std;
void EvenOdd(int number){
    if(number%2==0){
        cout<<number<<" is an even number"<<endl;
    }
    else{
        cout<<number<<" is an odd number"<<endl;
    }
}
void PosNeg(int num){
    if(num>=0){
        cout<<num<<" is a positive number"<<endl;
        EvenOdd(num);
    }
    else{
        cout<<num<<" is a negative number"<<endl;
    }
}
int main(){
   int x;
   cout<<"Enter a number:";
   cin>>x;
   PosNeg(x);
}