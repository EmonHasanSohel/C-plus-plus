#include<iostream>
using namespace std;
//Access Modifier/Access Specifier-> public, protected, private
class Student{
public:
    string Name;
private:
    string ID;
protected:
    float cgpa;
public:
    void Set_StudentInfo(string nm, string id, float cg){//Method
        Name=nm;
        ID=id;
        cgpa=cg;
    }
    void Get_StudentInfo(){
        cout<<"Student Name:"<<Name<<endl;
        cout<<"Student ID:"<<ID<<endl;
        cout<<"CGPA:"<<cgpa<<endl;
    }
};
int main(){
Student S1;
S1.Set_StudentInfo("ABC","23-45",3.77);
S1.Get_StudentInfo();
}