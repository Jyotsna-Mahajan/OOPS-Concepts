#include<iostream>
using namespace std;
class Print{
    public: void show(int x)
            {
                cout<<"int : "<<x<<endl;
            }
            void show(char ch)
            {
                cout<<"char: "<<ch<<endl;
            }
};
int main()
{
    Print p1;
    p1.show('&');
    p1.show(7);
    return 0; 
}