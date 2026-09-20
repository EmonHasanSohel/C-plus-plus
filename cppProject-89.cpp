#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="ABCDZ";
    char S2[50]="ABEDX";
    cout<<"Compare:"<<strcmp(S1,S2)<<endl;
    cout<<"Compare:"<<strcmp(S2,S1)<<endl;
    cout<<"Compare:"<<strcmp(S1,S1)<<endl;
 
}