#include<iostream>
using namespace std;
class Person{
    public: string name;
            int age;
            
};
class Student: public Person{
    public: int rollno;
};
class Teacher: public Person
{
    public: string subject;
};
int main()
{
    Student s1;
    Teacher t1;
    s1.name="Jyotsna";
    s1.rollno=1234;
    t1.subject="C++";
    cout<<"Name: "<<s1.name<<endl;
    cout<<"RollNo: "<<s1.rollno<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    return 0; 
}