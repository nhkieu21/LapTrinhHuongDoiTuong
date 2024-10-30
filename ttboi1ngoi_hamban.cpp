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
    friend toado operator ~(toado P)
    {
        toado A;
        A.x=-P.x;
        A.y=-P.y;
        return A;
    }
    void hienthi()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main ()
{
    toado A(2,3),B;
    B=~A;
    A.hienthi();
    B.hienthi();
}
