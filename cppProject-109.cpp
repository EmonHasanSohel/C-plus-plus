#include<iostream>
using namespace std;
int main(){
    int arr[4][5];
    cout<<"Enter the elements of the array:"<<endl;
    for(int row=0; row<4; row++){
        for(int col=0; col<5; col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Inputted Elements:"<<endl;
    for(int row=0; row<4; row++){
        for(int col=0; col<5; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int 
    /*for(int row=0; row<4; row++){
    for(int col=0; col<5; col++){
        if(arr[0][col]%2==0){
            cout<<arr[3][col]<<" is an even number"<<endl;
            }
        else{
            cout<<arr[2][col]<<" is an odd number"<<endl;
            }
    }*/
 
 
    //for(int row=0; row<4; row++){
        for(int col=0; col<5; col++){
                if(arr[2][col]%2==0){
                    cout<<arr[3][col]<<" is an even number"<<endl;
                }
                else{
                    cout<<arr[2][col]<<" is an odd number"<<endl;
                }
        }
 
    
 
}