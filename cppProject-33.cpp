#include<iostream>
using namespace std;
int main () {
    int a,b,c,d;
    cout<<"Enter Four Numbers:"<<endl;
    cin>>a>>b>>c>>d;

    if(a<b){
        if(a<c){
            if(a<d){
                cout<<a<<" is a smallest number"<<endl;
            }
            else{
            cout<<d<<" is a smallest number"<<endl;
            }
        }
    
        else {
            if(c<d){
                   cout<<c <<" is a smallest number"<<endl;
                   }
            else{
                cout<<d<<" is a smallest number "<<endl;
            } 
        }
    }    
        
    else{
        if(b<c){
            if(b<d){
                cout<<b<<" is a smallest number"<<endl;
            }
            else{
                cout<<d<<" is a smallest number"<<endl;
            }
        }
        else{
            if(c<d){
                cout<<c<<" is a smallest number"<<endl;
            }
            else{
                cout<<d<< " is a smallest number"<<endl;
            }
        }
    }
    return 0;
}

