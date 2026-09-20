#include<iostream>
using namespace std;
int main() {
    int line;
    cout<<"Enter the number of line"<<endl;
    cin>>line;
    for(int i=0; i<line; i++){
        for(int j=line-i; j>0; j--){
            cout<<" *";

        }
        cout<<endl;
    }
}