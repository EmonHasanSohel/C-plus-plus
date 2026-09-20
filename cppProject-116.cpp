#include<iostream>
using namespace std;
//Structure
struct StudentInfo{
    string Name; //Data Member
    string ID;
    float cgpa;
    int age;
 
void Set_StudentInfo(){ //Member Function
    cout<<"Enter student Name:";
    getline(cin,Name);
    cout<<"Enter student ID:";
    cin>>ID;
    cout<<"Enter student cgpa:";
    cin>>cgpa;
    cout<<"Enter student Age:";
    cin>>age;
    cin.ignore();
}
void Print_StudentInfo(){
    cout<<"Student Name:"<<Name<<endl;
    cout<<"Student ID:"<<ID<<endl;
    cout<<"Student Cgpa:"<<cgpa<<endl;
    cout<<"Student Age:"<<age<<endl;
}
} ;
int main(){
  StudentInfo S1;
  //To take student information
  S1.Set_StudentInfo();
  StudentInfo S2;
  S2.Set_StudentInfo();
  //To print student information
  cout<<"Student Information"<<endl;
  S1.Print_StudentInfo();
  S2.Print_StudentInfo();
}