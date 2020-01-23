#include<iostream>
using namespace std;
class A
{
    public:
        int x;
        void setx()
        {
            x=10;
        }
        void putx()
        {
            cout<<x<<endl;
        }
};

class B:virtual public A
{   public:
    int x;
        void setx()
        {
            x=20;
        }
        void putx()
        {
            cout<<x<<endl;
        }
};
class C:virtual public A
{
     public:
        int x;
        void setx()
        {
            x=30;
        }
        void putx()
        {
            cout<<x<<endl;
        }
};
class D:public B,public C
{
public:
    void set(){
        B::setx();
        C::setx();
    }
    void show()
    {
       B::putx();
       C::putx();
    }


};
int main()
{
    A a;
    B b;
    C c;
    D d;
    a.setx();
    a.putx();
    d.set();
    d.show();

}
