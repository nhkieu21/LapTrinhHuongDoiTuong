#include <bits/stdc++.h>
using namespace std;

class hoanthien
{
private:
    int n,i,s;
public:

    hoanthien(int n1)
    {
        n=n1;
        s=0;
        for (i=1;i<=n/2;i++)
        {
            if (n%i==0)
            {
                s=s+i;
            }
        }

    }
    void Hienthi()
    {
        if (s==n) {cout<<n<<" la so hoan thien ";}
        else {cout<<n<<" khong phai so hoan thien ";}
    }

};

main()
{
    hoanthien A(6);
    A.Hienthi();
}
