#include<iostream>
using namespace std;
int main(){
int year;
cout<<"Enter a year:";
cin>>year;
float res_100 = year%100;
float res_4 = year%4;
switch(year%400){
case 0:
cout<<year<<" is a leap year"<<endl;
break;
default:
switch(int (res_4)){
case 0:
switch(int(res_100)){
case 0:
cout<<year<<" is not a leap year"<<endl;
break;
default:
cout<<year<<" is a leap year"<<endl;
break;
}
break;
default:
cout<<year<<" is not a leap year"<<endl;
}
}
}