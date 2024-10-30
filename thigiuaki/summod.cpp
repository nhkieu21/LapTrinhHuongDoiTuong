#include<bits/stdc++.h>
using namespace std;
class summod
{
private:
    long long a,b,t;
public:
    void nhap ()
    {
        cin>>a>>b;
    }

    void xuat()
    {
        t=a%101;
        t=t+b%101;
        t=t%101;
        cout<<t;
    }
};
int main ()
{
    summod x;
    x.nhap();
    x.xuat();
}
