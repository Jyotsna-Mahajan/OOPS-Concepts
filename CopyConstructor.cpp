#include<iostream>
using namespace std;
class Teacher{
    private: double salary;
    public:
        string name;
        string dept;
        string subject;
         
        
        Teacher(string name, string dept, string subject, double salary)//Parameterized Constructor
        {
            this->name=name;
            this->dept=dept;
            this->subject=subject;
            this->salary=salary;
        }
        
        //Another way to access the information is using function 
        void getInfo()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Dept: "<<dept<<endl;
            cout<<"Subject: "<<subject<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
        
};
int main()
{
    Teacher t1("Jyotsna","Computer Science", "C++",25000);
    
    //calling the function 
    t1.getInfo();
}