#include<bits/stdc++.h>
using namespace std;
class gatho
{
    long long a,b,m,n;
public:
    void Nhap()
    {
        cin>>m>>n;
    }
    void xuat()
    {
        int dapan=0;
        for(a=1; a<=m; a++)
        {
            b = m-a;
            if(2*a+4*b==n)
            {
                cout<<a<<" "<<b;
                dapan++;
            }
        }
        if(dapan==0) cout<<-1;

    }

};
main ()
{
    gatho x ;
    x.Nhap();
    x.xuat();
}
