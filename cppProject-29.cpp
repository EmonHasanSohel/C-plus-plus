#include <iostream>
using namespace std;
int main () {
    int pages;
    cout<<"How many pages do you want to photocopy?"<<endl;
    cin>>pages;
    float total_cost;
    total_cost=pages*2.35;
    cout<<"Your total cost:"<<total_cost<<" TAKA"<<endl;
    if(total_cost>100){
        total_cost=total_cost-(total_cost*0.04);
        cout<<"Total Cost offer 4% discount:"<<total_cost<< " TAKA"<< endl;

    }
    else{
        cout<<"You did not get any discount"<<endl;
    }
}