#include<bits/stdc++.h>
using namespace std;
class amduong
{
private:
    long long n,i,d=0;
public:
    void nhap ()
    {
        cin>>n;
    }

    void xuat()
    {

        for (i=n/2;i>=2;i--)
        {
            if (n%i==0)
            {
                d++;
                cout<<n/i;
                //n=n/i;
            }
        }
        if (d==0)
        {
            cout<<-1;
        }
    }

};
int main ()
{
    amduong x;
    x.nhap();
    x.xuat();
}
