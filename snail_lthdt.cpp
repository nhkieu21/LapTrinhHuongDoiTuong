#include<bits/stdc++.h>
using namespace std;
class snail
{
    long long a,b,v,d;
public:
    void Nhap()
    {
        cin>>a>>b>>v;
    }
    void xuat()
    {
        long long d=0;
        while (v>0)
        {
            v=v-a;
            d++;
            if (v>0)
            {
                v=v+b;
                d++;
            }
        }
        if (d%2==0)
        {
            cout<<d/2<<"\n";
        }
        else
        {
            cout<<d/2 +1<<"\n";
        }

    }

};
main ()
{
    snail x ;
    x.Nhap();
    x.xuat();
}
