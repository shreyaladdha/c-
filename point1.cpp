#include<iostream>
using namespace std;
class point1
{
    int x,y;
public:
    point1()
    {
        x=0;y=0;
    }
    point1(int a,int b)
    {
        x=a;y=b;
    }
    point1 add(point1 p1)
    {
        point1 p;
        p.x=x+p1.x;
        p.y=y+p1.y;
        return p;
    }
    void disp()
    {

        cout<<x<<" "<<y<<endl;
    }
};
int main()
{

    point1 p1(10,20);
    point1 p2(30,40);
    point1 p3;
    p3=p1.add(p2);
    p3.disp();

}
