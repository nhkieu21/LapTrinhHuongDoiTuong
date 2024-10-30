#include <bits/stdc++.h>
using namespace std;

class diem
{
private:
    double x,y;
public:
    diem() {x=y=0;}
    diem(double x1, double y1)
    {
        x=x1;
        y=y1;
    }
    void hienthi()
    {
        cout<<" x= "<<x<<" y= "<<y;
    }
};

class hinhtron: public diem
{
private:
    double r;
public:
    hinhtron() {r=0.0;}
    hinhtron(double x1, double y1, double r1): diem(x1,y1)
    {
        r=r1;
    }
    double get_r() {return r;}
};
 int main ()
 {
     hinhtron h(2.5, 3.5, 8);
     cout<<"hinh tron co tam: ";
     h.hienthi();
     cout<<" co ban kinh = "<<h.get_r();
 }
