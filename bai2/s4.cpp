#include <bits/stdc++.h>
using namespace std;

class s4
{
private:
    int n,i,t,x;
    double s;
public:

    s4(int n1,int x1)
    {
        n=n1;
        x=x1;
        s=1;
        t=1;
        for (i=1;i<=n;i++)
        {
            t=t*i;
            s=s+pow(-x,i)/t;
        }

    }
    void Hienthi()
    {
        cout<<s;
    }

};

main()
{
    s4 A(5,3);
    A.Hienthi();
}
