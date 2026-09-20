#include<iostream>
using namespace std;
struct StudentInfo{
    string Name;
    string ID;
    void Set_StudentInfo();
    void Print_StudentInfo();

};

void StudentInfo:: Set_StudentInfo(){
    cout<<"Enter Student Name:";
    cin>>Name;
    cout<<"Enter Student ID:";
    cin>>ID;

}
void StudentInfo:: Print_StudentInfo(){
    cout<<"Enter Student Name:"<<Name<<endl;
    cout<<"Enter Student ID:"<<ID<<endl;

}
int main(){
    StudentInfo S1;
    S1.Set_StudentInfo();
    S1.Print_StudentInfo();
}
