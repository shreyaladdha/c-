#include<iostream>
using namespace std;
class stat
{
    static int c;
public:
    stat()
    {

        cout<<"Creating object"<<c<<endl;
        c++;
    }
    static void noofobj()
    {

        cout<<"total no of obj"<<c<<endl;
    }
    ~stat()
    {
        cout<<"Destructing object"<<c<<endl;
        c--;
    }
};

int stat::c;
int x=10;
int main()
{

    stat s1,s2,s3;
    cout<<"pause"<<endl;
    stat::noofobj();
    int x=100;
    cout<<x<<" "<<::x<<endl;
    return 0;

}

