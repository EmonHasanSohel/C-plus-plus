#include<iostream>
using namespace std;
int main () {
    cout<<"for loop:";
    for(int i=0; i<5; i++){
        cout<<i<<" ";

    }
    cout<<endl;
    int j=0;
    cout<<"while loop:";
    while(j<5){
        cout<<j<<" ";
        j++;

    }
    cout<<endl;
    cout<<"do....while loop:";
    int k=0;
    do{
        cout<<k<<" ";
        k++;

    }
    while(k<5);
    cout<<endl;
    return 0;
}