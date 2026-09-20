#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="Hello World!";
    char S2[50]="Welcome";
    cout<<"Before S1:"<<S1<<endl;
    cout<<"Concatenation:"<<strcat(S1,S2)<<endl;
    cout<<"After S1:"<<S1<<endl;
}