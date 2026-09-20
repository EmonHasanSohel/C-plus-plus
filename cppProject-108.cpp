#include<iostream>
using namespace std;
void Prime(int arr[5]){
    for(int i=0; i<5; i++){
        if(arr[i]%i==0){
            cout<<arr[i]<<" is not a prime number"<<endl;
        }
        else{
            cout<<arr[i]<<" is a prime number"<<endl;
        }
    }
}
int main(){
    int arr[5];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<5; i++){
        cin>>arr[i];

    }
    Prime(arr);
}
