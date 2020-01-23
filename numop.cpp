#include<iostream>
using namespace std;
class num
{
    public:
    int x;
    void getx()
    {
        cout<<"enter x"<<endl;
        cin>>x;

    }
    void putx()
    {

        cout<<x<<endl;
    }
    void operator -()
    {

        x*=-1;
    }
};
int main()
{

    num n1,n2;
    n1.getx();
    n2.getx();
    -n1;
    -n2;
    n1.putx();
    n2.putx();
    return 0;
}
