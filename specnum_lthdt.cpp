#include<bits/stdc++.h>
using namespace std;
class specnum
{
    long long a,b,n,d=0,i;
public:
    void Nhap()
    {
        cin>>a>>b;
    }
    bool specnum1 (long long n)
    {
        long long d1=0,d2=0;
        while (n>0)
        {
            if ((n%10)%2==0)
            {
                d1=d1+n%10;
                n=n/10;
            }
            else
            {
                d2=d2+n%10;
                n=n/10;
            }
        }
        if (d1==d2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void xuat()
    {
        for (i=a; i<=b; i++)
        {
            if (specnum1(i))
            {
                d++;
            }
        }
        cout<<d;
    }

};
main ()
{
    specnum x ;
    x.Nhap();
    x.xuat();
}
