#include<iostream>
using namespace std;
int main(){
    for(int j=0; j<10; j++){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int prime=true;
    for(int i=2; i<num; i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime=false){
        cout<<num<<" is not a prime number"<<endl;
    }
    else{
        cout<<num<<" is a prime number" <<endl;

    }
    }
}