#include<bits/stdc++.h>
using namespace std;
long long a[1000001],b[1000001];


class flprime
{
private:
    long long n,dem=0,i,d,h,k;
public:
    void nhap ()
    {
        cin>>n;
        for (i=1; i<=n; i++)
        {
            cin>>a[i];

        }
    }
    bool kt(long long n)
    {
        long long i,d=0;
        for (i=2; i<=n/2; i++)
        {
            if (n%i==0)
            {
                return false;
                d++;
            }
        }
        if (d==0)
        {
            return true;
        }


    }
    void xuat()
    {
        dem=0;
        h=-1;k=-1;
        for (i=1; i<=n; i++)
        {
            if (kt(a[i])==true)
            {
                if (h==-1)
                {
                    h=a[i];

                }
                k=a[i];
            }

        }

        if (h==-1)
        {
            cout<<-1;
        }
        else
        {
            cout<<h<<" "<<k;
        }
    }

};
int main ()
{
    flprime x;
    x.nhap();
    x.xuat();
}
