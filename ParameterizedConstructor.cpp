#include<iostream>
using namespace std;
class Teacher{
    public:
        string name;
        string dept;
        string subject;
        double salary; 
        
        Teacher(string n, string d, string s, double sal)//Parameterized Constructor
        {
            name=n;
            dept=d;
            subject=s;
            salary=sal;
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
    cout<<"Name: "<<t1.name<<endl;
    cout<<"Dept: "<<t1.dept<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.salary<<endl;
    cout<<endl;
    //calling the function 
    t1.getInfo();
}