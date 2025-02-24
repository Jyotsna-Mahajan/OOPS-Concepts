#include<iostream>
using namespace std;
class Student{
    public: string name;
            double *cgpaPtr;
            
            Student(string name , double cgpa)
            {
                this->name=name;
                cgpaPtr=new double;
                *cgpaPtr=cgpa;
            }
            
            Student(Student &obj)
            {
                this->name=obj.name;
                cgpaPtr=new double;      //Deep Copy
                *cgpaPtr=*obj.cgpaPtr;
                
            }
            void getInfo()
            {
                cout<<"Name: "<<name<<endl;
                cout<<"CGPA: "<<*cgpaPtr<<endl;
            }
};

int main()
{
    Student s1("Jyotsna",8.9);
    Student s2(s1);
    s1.getInfo();
    
    *(s2.cgpaPtr)=9.2;
    s2.name="Jaya";
    s1.getInfo();
    s2.getInfo();
    

    
}
