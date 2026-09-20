#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a<b){
        if(a<c){
            cout<<a<<" smallest"<<endl;
        }
        else{
            cout<<c<<" smallest"<<endl;
        
        }
    }
    else{
        if(b<c){
            cout<<b<<" smallest"<<endl;

        }
        else{
            cout<<c<<" smallest"<<endl;
        }
    }
}