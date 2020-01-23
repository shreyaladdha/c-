#include<iostream>
using namespace std;
class complx
{
    int r, i;
public:
    void set()
    {
        cout<<"enter real and imag number"<<endl;
        cin>>r>>i;
    }
    complx operator +(complx c1)
    {
        complx c;
        c.r=r+c1.r;
        c.i=i+c1.i;
        return c;
    }
    void disp()
    {
        cout<<r<<"+i"<<i<<endl;
    }
};
int main()
{
    complx c1,c2;
    complx c3;
    c1.set();
    c2.set();
    c3=c1+c2;
    c3.disp();
}
