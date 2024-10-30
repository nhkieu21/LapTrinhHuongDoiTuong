#include<bits/stdc++.h>
using namespace std;
long long a[1000001];
class demsochan
{
private:
    long long n,dem=0,i;
public:
    void nhap ()
    {
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
            if (a[i]%2==0)
            {
                dem++;
            }
        }
    }

    void xuat()
    {
        cout<<dem;
    }
};
int main ()
{
    demsochan x;
    x.nhap();
    x.xuat();
}
