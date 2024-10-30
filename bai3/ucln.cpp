#include <bits/stdc++.h>
using namespace std;

class ucln
{
private:
    int a,b;
public:

    ucln(int a1,int b1)
    {
        a=a1;
        b=b1;
        while (a!=b)
        {
            if (a>b) {a=a-b;}
            else {b=b-a;}
        }

    }
    void Hienthi()
    {
        cout<<a;
    }

};

main()
{
    ucln A(5,35);
    A.Hienthi();
}
