#include <bits/stdc++.h>
#include<string.h>
using namespace std;

long long n,c[1000001],b[1000001],i,kq,t;
class watter
{
public:
    void Nhap ()
    {
        cin>>n;
        t=0;
        for (i=1;i<=n;i++)
        {
            cin>>b[i]>>c[i];
            t=t+b[i];
        }
    }
    int xuat()
    {
        sort (c+1,c+1+n);
        i=1;
        kq=n;
        while (t>0)
        {
            if (t>=c[i])
            {
                kq--;
                t=t-c[i];
                i++;
            } else {t=0;break;}
        }
        cout<< kq;
    }
};
int main ()
{
    watter x;
    x.Nhap();
    x.xuat();
}
