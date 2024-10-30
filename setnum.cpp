#include <bits/stdc++.h>

using namespace std;

long long n,a[1000001],b[1000001];
class setnum
{
    long long i,dem=0;
public:
    void Nhap()
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            b[a[i]]=0;
        }
    }
    long long xuat()
    {
        for(i=1; i<=n; i++)
        {
            b[a[i]]++;
            if (b[a[i]]==1)
            {
                dem++;
            }
        }
        return dem;
    }
};
int main ()
{
    setnum x;
    x.Nhap();
    cout<<x.xuat();
}
