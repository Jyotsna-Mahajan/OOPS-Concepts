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
                this->cgpaPtr=obj.cgpaPtr;  //Shallow copy does not work in dynamic memory allocation. 
                
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
    s1.getInfo();
    

    
}
