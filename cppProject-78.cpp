#include<iostream>
using namespace std;
int main(){
    char arr[4][4];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Inputted Elements:"<<endl;
    for(int row=0; row<4; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]=='A' || arr[i][j]=='a' || arr[i][j]=='E'|| arr[i][j]=='e'|| arr[i][j]=='I'|| arr[i][j]=='i' || arr[i][j]=='O' || arr[i][j]=='o'||arr[i][j]=='U' || arr[i][j]=='u' ){
                cout<<arr[i][j]<<" is a Vowel"<<endl;
                }
                else{
                    cout<<arr[i][j]<<" is a Consonant"<<endl;
                    }
                    
                cout<<endl;
        }

    }
}