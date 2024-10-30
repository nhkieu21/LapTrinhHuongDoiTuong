#include<bits/stdc++.h>

using namespace std;
class luoib40
{
private:

    long long n;
public:
    void nhap ()
    {
        cin>>n;
    }

    void xuat()
    {
        if (n%10==0)
        {
            cout<<n/10;
        }
        else {cout<<n/10+1;}
    }

};
int main ()
{
    luoib40 x;
    x.nhap();
    x.xuat();
}
