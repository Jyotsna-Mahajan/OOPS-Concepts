#include<iostream>
using namespace std;
class Teacher{
    private: double salary;
    
    public: string name;
            string dept; 
            string subject;
            void changeDept(string newDept){
                dept=newDept;
            }
            //setter
            void setSalary(double s)
            {
                salary=s;
            }
            //getter
            int getSalary()
            {
                return salary;
            }
            
};

int main()
{
    Teacher t1;
    t1.setSalary(25000);
    cout<<"The salary is : "<<t1.getSalary()<<endl;
    return 0; 
}