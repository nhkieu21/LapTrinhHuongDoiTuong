#include<bits/stdc++.h>
using namespace std;

class toado
{
private:
    int x,y;
public:
    toado ()
    {
        x=y=0;
    }
    toado (int x1, int y1)
    {
        x=x1;y=y1;
    }
    friend toado operator +(toado d1, toado d2)
    {
        toado P;
        P.x=d1.x+d2.x;
        P.y=d1.y+d2.y;
        return P;
    }
    void hienthi()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main ()
{
    toado A(2,3),B(3,-5);
    toado C;
    C=A+B;
    A.hienthi();
    B.hienthi();
    C.hienthi();
}
