#include<iostream>
using namespace std;
class Student{
private:
    string Name;
    float cgpa;
public:
    Student(string nm, float cg){ //Parameterized Constructor
        Name=nm;
        cgpa=cg;
    }
    ~Student(){
    cout<<"Student Name:"<<Name<<endl;
    cout<<"Student cgpa:"<<cgpa<<endl;
    }
};
int main(){
    Student S1("ABC",3.22);
    Student S2("DEF",2.55);
}