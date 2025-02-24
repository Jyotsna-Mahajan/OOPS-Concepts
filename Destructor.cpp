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
            
            ~Student(){
                cout<<"Hi, I delete everything";
                delete cgpaPtr;
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

    s1.getInfo();
}   
    
    
    

    

