#include<iostream>
using namespace std;
int main(){
    char arr[4];
    cout<<"Enter a 4 Characters:"<<endl;
    for(int i=0; i<4; i++){
        cin>>arr[i];

    }
    cout<<"Inputted Characters:";
    for(int j=0; j<4; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    for(int k=0; k<4; k++){
        if(arr[k]=='A'||arr[k]=='E'||arr[k]=='I'||arr[k]=='O'||arr[k]=='U'|| arr[k]=='a'||arr[k]=='e'||arr[k]=='i'||arr[k]=='o'||arr[k]=='u'){
            cout<<arr[k]<<" is a vowel"<<endl;

        }
        else{
            cout<<arr[k]<<" is a Consonant"<<endl;
        }
    }

}