#include <bits/stdc++.h>
using namespace std;

class s5
{
private:
    int n,i,t,x;
    double s;
public:

    s5(int n1,int x1)
    {
        n=n1;
        x=x1;
        s=1;
        for (i=1;i<=n;i++)
        {
            s=s+pow(sin(x),i);
        }

    }
    void Hienthi()
    {
        cout<<s;
    }

};

main()
{
    s5 A(5,45);
    A.Hienthi();
}
