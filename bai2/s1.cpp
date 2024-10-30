#include <bits/stdc++.h>
using namespace std;

class s1
{
private:
    int n,i;
    double s;
public:

    s1(int n1)
    {
        n=n1;
        s=0;
        for (i=1;i<=n;i++)
        {
            s=s+1.0/i;
        }

    }
    void Hienthi()
    {
        cout<<s;
    }

};

main()
{
    s1 A(14);
    A.Hienthi();
}
