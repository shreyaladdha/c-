#include<iostream>
using namespace std;
class publication
{
    char title[20];
    float price;
    public:
        void setd()
        {
            cout<<"enter title and price"<<endl;
            cin>>title>>price;
        }
        void getd()
        {
            cout<<"title:"<<title<<endl;
            cout<<"price:"<<price<<endl;
        }


};
class sales
{
public:
    int sa[3];
    void setd()
    {
        cout<<"enter 3 months sales"<<endl;
        for(int i=0;i<3;i++)
            cin>>sa[i];
    }
    void getd()
    {
        cout<<"sales of 3 months are: "<<endl;
        for(int i=0;i<3;i++)
            cout<<sa[i]<<" "<<endl;
    }
};
class book :public publication,public sales
{
    int pagec;
    public:
    void setd()
    {
        publication::setd();
        sales::setd();
        cout<<"enter page count"<<endl;
        cin>>pagec;
    }
    void getd()
    {
        publication::getd();
        sales::getd();
        cout<<"page count:"<<pagec<<endl;
    }
};
class tape :public publication,public sales
{
    float playt;
    public:
    void setd()
    {
        publication::setd();
        sales::setd();
        cout<<"enter playing time"<<endl;
        cin>>playt;
    }
    void getd()
    {
        publication::getd();
        sales::getd();
        cout<<"playing time:"<<playt<<endl;
    }
};
int main()
{
    book b;
    tape t;
    cout<<"BOOK"<<endl;
    b.setd();
    b.getd();
    cout<<"TAPE"<<endl;
    t.setd();
    t.getd();

}
