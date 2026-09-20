#include<iostream>
using namespace std;
int main(){
    for(int j=0; j<10; j++){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int prime=1;
    for(int i=2; i<num; i++){
        if(num%i==0){
            prime=0;
            break;


        }
    }
    if (prime=0){
        cout<<num<<" is not a prime number"<<endl;
    }
    else{
        cout<<num<<" is a prime number" <<endl;

    }
    }
}