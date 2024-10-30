#include <bits/stdc++.h>
using namespace std;

class gt
{
private:
    int n,s,i;
public:

    gt(int n1)
    {
        n=n1;
        s=1;
        for (i=1;i<=n;i++)
        {
            s=s*i;
        }

    }
    void Hienthi()
    {
        cout<<s;
    }

};

main()
{
    gt A(4);
    A.Hienthi();
}
