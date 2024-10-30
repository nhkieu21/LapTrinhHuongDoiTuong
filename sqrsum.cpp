#include <bits/stdc++.h>

using namespace std;

long long n,a[1000001];
class sqrsum
{
    long long i;
public:
    void Nhap()
    {
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
        }
    }
    long long sum()
    {
        long long s=0;
        for (i=1;i<=n;i++)
        {
            if (a[i]<0)
            {
                s=s+a[i]*a[i];
            }
        }
        return s;
    }
};
int main ()
{
    sqrsum x;
    x.Nhap();
    cout<<x.sum();
}
