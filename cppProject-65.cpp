#include<iostream>
using namespace std;
int main(){
    int Min,Max; //40-45
    cout<<"Enter minimum value of the range:";
    cin>>Min;
    cout<<"Enter maximum value of the range:";
    cin>>Max;
    int Size=(Max-Min)+1; //6
    int arr[Size];
    cout<<"Elements of the array:";
    for(int i=0; i<Size; i++){
        arr[i]=Min;  //arr[0]=40; arr[1]=41; arr[2]=42; arr[3]=43; arr[4]=44; arr[5]=45
        Min++;
        cout<<arr[i]<<" ";
    }
    int even[Size];
    int Count=0;
    for(int j=0; j<Size; j++){
        if(arr[j]%2==0){
            even[Count]=arr[j]; //even[0]=40; even[1]=42; even[2]=44
            Count++; //1 2 3
        }
    }
    cout<<endl<<"Even Numbers:";
    for(int k=0; k<Count; k++){
        cout<<even[k]<<" ";
    }
    cout<<endl;
 
}