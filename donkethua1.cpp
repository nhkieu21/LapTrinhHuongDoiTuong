#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int n;
    void nhap ()
    {
        cout<<"Nhap n = ";
        cin>>n;
    }

};

class B:public A
{
public:
    int m;
    void nhap()
    {
        cout<<"Nhap m = ";
        cin>>m;
    }
    void view()
    {
        cout<<A::n<<" "<<m;
    }
};
int main ()
{
    B ob;
    ob.A::nhap();
    ob.B::nhap();
    ob.view();
}
