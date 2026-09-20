#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char S1[50]="ABCDZ";
    char S2[50]="DBEDX";
    cout<<"Exceptional Compare:"<<strncmp(S1,S2,1)<<endl;
    cout<<"Exceptional Compare:"<<strncmp(S2,S1,1)<<endl;
 
}