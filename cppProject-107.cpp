#include<iostream>
using namespace std;
void Positivenegative(int arr[5]){
    for(int i=0; i<5; i++){
        if(arr[i]>=0){
            cout<<arr[i]<<" is a positive number"<<endl;

        }
        else{
            cout<<arr[i]<<" is a negative number"<<endl;
        }
    }

}
int main(){
    int arr[5];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<5; i++){
        cin>>arr[i];

    }
    Positivenegative(arr);
}