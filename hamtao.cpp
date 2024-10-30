#include<bits/stdc++.h>
using namespace std;
//ham tao trung ten cua lop
//ham tao khong co kieu tra ve
//ham tao phai khai bao trong vung public
class diem
{
private:
    double x,y;
public:
    diem ()
    {
        x=y=0;
    }
    diem (int x1, int y1)
    {
        x=x1;y=y1;
    }
    friend ostream& operator<<(ostream &os, const diem &p)
    {
        os<<p.x<<" "<<p.y<<endl;
        return os;
    }
};


int main ()
{
    diem a;
    diem b(4,3);
    cout<<a;
    diem c(b);
    cout<<c;
}
