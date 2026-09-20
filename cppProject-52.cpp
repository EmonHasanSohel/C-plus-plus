#include <iostream>
using namespace std;
int main () {
    for(int i=0; i<8; i++){
        cout<<"j:"<<i<<" ";
        if(i==5){
            continue;
        }

        
        cout<<"k:"<<i<<" ";

    }
    cout<<endl;
}