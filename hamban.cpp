#include<bits/stdc++.h>
using namespace std;

class diem
{
private:
    double x,y;
public:
    void nhap (double x1, double y1)
    {
        x=x1;
        y=y1;
    }
    friend double d(diem a, diem b);
};

double d(diem a, diem b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int main ()
{
    diem a,b;
    a.nhap(0,0);
    b.nhap(0,2);
    double s=d(a,b);
    cout<<"do dai ab = "<<s;
}
