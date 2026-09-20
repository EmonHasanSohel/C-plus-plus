#include<iostream>
using namespace std;
int main() {
    int line;
    cout<<"Enter the number of line"<<endl;
    cin>>line;
    for(int i=0; i<line; i++){
        for(int j=line-i; j>0; j--){
            cout<<"  ";

        }
        for(int k=0; k<(2*i+1); k++){
            cout<<" *";
        }
        cout<<endl;
    }
}