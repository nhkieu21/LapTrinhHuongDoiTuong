#include <bits/stdc++.h>

using namespace std;

long long n,a[1000001];
class Array
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
    long long arrmax()
    {
        long long m=a[1];
        for (i=2;i<=n;i++)
        {
            m=max(m,a[i]);
        }
        return m;
    }
};
int main ()
{
    Array x;
    x.Nhap();
    cout<<x.arrmax();
}
