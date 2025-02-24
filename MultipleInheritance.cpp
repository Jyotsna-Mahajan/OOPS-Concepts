#include<iostream>
using namespace std;
class Student{
    public: string name;
            int rollno;
            
};
class Teacher{
    public: string subject;
            double salary;
};
class TA: public Student, public Teacher
{
    
};
int main()
{
    TA t1;
    t1.name="Jyotsna Mahajan";
    t1.subject="C++";
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    return 0; 
}