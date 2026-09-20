#include<iostream>
using namespace std;
int main(){
    int start;
    int finish;
    cout<<"Enter the starting number of the range."<<endl;
    cin>>start;
    cout<<"Enter the finishing number of the range."<<endl;
    cin>>finish;
    int Size=(finish-start)+1;
    int arr[Size];
    cout<<"Elements of the array: ";
    for (int i=0; i<Size; i++){
        arr[i]=start;
        start++;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int even[Size];
    int a=0;//index for even array
    cout<<"Elements that are even: ";
    for (int j=0; j<Size; j++){
        if (arr[j]%2==0){
            even[a]=arr[j];
            cout<<even[a]<<" ";
            a++;
        }
    }
    cout<<endl;
    int odd[Size];
    int b=0;
    cout<<"Elements that are odd: ";
    for (int k=0; k<Size; k++){
        if (arr[k]%2!=0){
            odd[b]=arr[k];
            cout<<odd[b]<<" ";
            b++;

        }
    }
    cout<<endl;
    int prime[Size];
    int c=0;
    int l;
    bool x=true;
    cout<<"Elements that are prime: ";
    for(l=0; l<Size; l++){
        for (int m=2; m<arr[l]; m++){
            if (arr[l]%m==0){
                bool x=false;
            }
        }
        if (bool x=true){
            prime[c]=arr[l];
            cout<<prime[c]<<" ";
            c++;
    }

    }
    cout<<endl;
}
