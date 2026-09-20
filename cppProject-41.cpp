#include<iostream>
using namespace std;
int main (){
    for(int i=0; i<4; i++){
        int num;
        cout<<"Enter a Number:";
        cin>>num;
        if(num>=0){
            cout<<num<<" is a positive number"<<endl;

        }
        else{
            cout<<num<<" is a negative number"<<endl;
        }
    }
}