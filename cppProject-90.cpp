#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="ABCDZ";
    char S2[50]="ABEDX";
    cout<<"Compare:"<<strncmp(S1,S2,2)<<endl;
    cout<<"Compare:"<<strncmp(S1,S2,4)<<endl;
}