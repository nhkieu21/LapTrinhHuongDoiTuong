#include <bits/stdc++.h>
using namespace std;

class pt
{
private:
    int a,b;
public:

    pt(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void Hienthi()
    {
        cout << -b/a;
    }

};

main()
{
    pt A(3,6);
    A.Hienthi();
}
