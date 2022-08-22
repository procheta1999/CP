#include<iostream>
using namespace std;
class A
{
    private:
    int x;
    public:
    A(int arg_x)
    {
        cout<<"Hello"<<endl;
        x=arg_x;
    }
    void ok()
    {
        cout<<"ok"<<endl;
    }
    ~A()
    {
        delete[] x);
        cout<<"Thats all"<<endl;
    }
};
int main()
{
    A a;
    a.ok();
}