#include <bits/stdc++.h>
using namespace std;

class nto
{
private:
    int n,i,t;
public:

    nto(int n1)
    {
        n=n1;
        if (n==2) {t= 1;}
        for (i=2;i<=n/2;i++)
        {
            if (n%i==0)
            {
                t=0;
            }
        }
        t=1;

    }
    void Hienthi()
    {
        if (t==1) {cout<<n<<" la so nguyen to ";}
        else {cout<<n<<" khong phai so nguyen to ";}
    }

};

main()
{
    nto A(5);
    A.Hienthi();
}
