#include <bits/stdc++.h>
#include<string.h>
using namespace std;

long long n,c[1000001],b[1000001],i,kq,t;
class robot
{
public:
    void Nhap ()
    {
        cin>>n;
        for (i=1;i<=n;i++)
        {
            cin>>b[i]>>c[i];
        }
    }
    int xuat()
    {
        kq=0;
        for (i=3;i<=n;i++)
        {
            if (c[i]==c[i-1] && b[i]==b[i-1]+1)
            {
                kq++;
            }
            else if (c[i]==c[i-1]+1 && b[i]==b[i-1])
            {
                kq++;
            }
        }
        cout<<kq;
    }
};
int main ()
{
    robot x;
    x.Nhap();
    x.xuat();
}
