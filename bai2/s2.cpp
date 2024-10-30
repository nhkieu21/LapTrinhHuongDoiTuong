#include <bits/stdc++.h>
using namespace std;

class s2
{
private:
    int n,i,t;
    double s;
public:

    s2(int n1)
    {
        n=n1;
        s=0;
        t=1;
        for (i=1;i<=n;i++)
        {
            t=t*i;
            s=s+1.0/t;
        }

    }
    void Hienthi()
    {
        cout<<s;
    }

};

main()
{
    s2 A(14);
    A.Hienthi();
}
