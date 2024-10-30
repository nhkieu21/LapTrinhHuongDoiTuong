#include <bits/stdc++.h>

using namespace std;

long long n,a[1000001],b[1000001];
class daytang
{
    long long i;
public:
    void Nhap()
    {
        cin>>n;
        for (i=1; i<=n; i++)
        {
            cin>>a[i];
        }
    }
    long long xuat()
    {
        b[1]=1;
        for (i=2; i<=n; i++)
        {
            if (a[i]>=a[i-1])
            {
                b[i]=b[i-1]+1;
            }
            else
            {
                b[i]=1;
            }
        }
        long long t=*max_element(b+1,b+1+n);
        return t;
    }
};
int main ()
{
    daytang x;
    x.Nhap();
    cout<<x.xuat();
}
