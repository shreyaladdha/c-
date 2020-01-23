#include<iostream>
using namespace std;
class 2d
{

public:
    virtual void area()=0;
    virtual void func()
    {
        cout<<"hello"<<endl;
    }
};
class rec:public 2d
{

public:
    int x,y,ar;
    void getd()
    {
        cout<<"enter l and b"<<endl;
      ccin>>x>>y;
    }
    void area()
    {
        ar=x*y;
        cout<<"area: "<<ar<<endl;
    }
};
class circle:public 2d
{

public:
    int x;
    float ar;
    void getd()
    {
        cout<<"enter radius"<<endl;
        cin>>x;

    }
    void area()
    {
        ar=3.14*x*x;
        cout<<"area: "<<ar<<endl;
    }
};
int main()
{
    int c;
    area *a;
    rec b;
    circle c;
    cout<<"1.rectangle"<<endl;
    cout<<"2.circle"<<endl;
    cin>>c;
    switch(c)
    {
    case 1:
        a=&b;
        a->getd();
        a->area();
        break;
        case 2:
        a=&c;
        a->getd();
        a->area();
        break;
        default:
            cout<<"wrong"<<endl;
    }
}
