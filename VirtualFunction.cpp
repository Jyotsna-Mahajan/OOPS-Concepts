#include<iostream>
using namespace std;
class Parent{
    public:  void getInfo()
            {
                cout<<"Parent Class"<<endl;
            }
            virtual void hello()
            {
                cout<<"Hello from parent "<<endl;
            }
};
class Child: public Parent{
    public: void getInfo()
            {
                cout<<"Child Class"<<endl;
            }
            void hello()
            {
                cout<<"Hello from child"<<endl;
            }
};
int main()
{
    Child c1;
    c1.hello();
    
    Parent p1;
    p1.hello();
    
    
}