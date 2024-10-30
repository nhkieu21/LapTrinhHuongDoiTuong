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
    toado operator ~()
    {
        toado A;
        A.x=-x;
        A.y=-y;
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
