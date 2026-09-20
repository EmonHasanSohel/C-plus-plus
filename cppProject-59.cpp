#include<iostream>
using namespace std;
int main (){
    int arr[4];
    cout<<"Enter the elements of the array:"<<endl;
    for(int j=0; j<4; j++){
        cin>>arr[j];
    }
    cout<<endl;
    cout<<"Elements of the array:";
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    for(int k=0; k<4; k++){
        if( arr[k]%2==0){
        cout<<arr[k]<<" is an even number"<<endl;
        }
        else{
            cout<<arr[k]<<" is an odd number"<<endl;
        }

    }
    return 0;

}