#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="C";
    char S2[50]="A";
    cout<<"Compare:"<<strcmp(S1,S2)<<endl;
    cout<<"Compare:"<<strcmp(S2,S1)<<endl;
    cout<<"Compare:"<<strcmp(S1,S1)<<endl;
}