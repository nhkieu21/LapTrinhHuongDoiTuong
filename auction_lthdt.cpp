#include<bits/stdc++.h>
using namespace std;
class aution
{
    long long a,b,n,d=0,i;
public:
    void Nhap()
    {
        cin>>a>>b;
    }
    bool nto (long long n)
    {
        long long i,d=0;
        if (n<2)
        {
            return false;
        }
        for (i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                d++;
                return false;
            }
        }
        return true;

    }
    bool Doixung(long long n)
    {
        long long d=0,h=n;

        while (n>0)
        {
            d*=10;
            d+=n%10;
            n/=10;
        }
        if (d==h)
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
        for (i=a;i<=b;i++)
    {
        if ((nto(i)) && (Doixung(i)))
        {
            d++;
        }
    }
    cout<<d;
    }

};
main ()
{
    aution x ;
    x.Nhap();
    x.xuat();
}
