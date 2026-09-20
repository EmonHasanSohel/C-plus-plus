#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="Hello World!";
    char S2[50]="Welcome";
    cout<<"Before S2:"<<S2<<endl;
    cout<<"Copy:"<<strncpy(S2,S1,4)<<endl;
    cout<<"After S2:"<<S2<<endl;
}
 