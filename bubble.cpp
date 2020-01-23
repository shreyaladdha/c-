#include<iostream>
using namespace std;
template < class T >
void bubble_sort( T a[], int n )
{
    int i,j;
    T temp ;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
    int main()
    {
        int c;
        cout<<"1.interger array"<<endl<<"2.floating array"<<endl;
        cin>>c;
        switch(c)
        {
        case 1:
            int l;
            cout<<"enter array length"<<endl;
            cin>>l;
            cout<<"enter integer array"<<endl;
            int ai[l];
            for(int i=0;i<l;i++)
                cin>>ai[i];
            bubble_sort(ai,l);
            cout<<"Sorted array"<<endl;
            for(int i=0;i<l;i++)
             cout<<ai[i]<<" "<<endl;
             break;
               case 2:
            int l2;
            cout<<"enter array length"<<endl;
            cin>>l2;
            cout<<"enter flaoting array"<<endl;
            float af[l2];
            for(int i=0;i<l2;i++)
                cin>>af[i];
            bubble_sort(af,l2);
            cout<<"Sorted array"<<endl;
            for(int i=0;i<l2;i++)
             cout<<af[i]<<" "<<endl;
             break;
        }
    }
