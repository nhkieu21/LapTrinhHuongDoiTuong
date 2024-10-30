#include <bits/stdc++.h>
using namespace std;

class bcnn
{
private:
    int a,b,t;
public:

    bcnn(int a1,int b1)
    {
        a=a1;
        b=b1;
        t=a*b;
        while (a!=b)
        {
            if (a>b) {a=a-b;}
            else {b=b-a;}
        }

    }
    void Hienthi()
    {
        cout<<t/a;
    }

};

main()
{
    bcnn A(5,35);
    A.Hienthi();
}
