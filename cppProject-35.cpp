#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<5; i++){
         int num;
         cout<<"Enter a number:";
         cin>>num;
         if(num%2==0){
             cout<<num<<" an even number"<<endl;
              }
               else{
                 cout<<num<<" an odd number"<<endl;
           }
     }
}