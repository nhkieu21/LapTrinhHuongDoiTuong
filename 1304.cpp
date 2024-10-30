#include <bits/stdc++.h>
using namespace std;

class tugiac
{
public:
    bool a;
    tugiac()
    {
        a=true;
    }
    void xuat()
    {
        cout<<"\nLa hinh co 4 canh: "<<a<<" ";
    }

};

class hinhthang:public tugiac
{
private:
    bool b;
public:
    hinhthang(bool x)
    {
        b=x;
    }
    void xuat()
    {
        tugiac::xuat();
        cout<<"Co 1 canh doi dien song song: "<<b<<" ";
    }
} ;

class hinhbinhhanh: public tugiac
{
private:
    bool c;
public:
    hinhbinhhanh(bool x)
    {
        c=x;
    }
    void xuat()
    {
        tugiac::xuat();
        cout<<"Co 2 cap canh song song va bang nhau: "<<c<<" ";
    }
};


int main ()
{
    hinhthang ob(true);
    hinhbinhhanh ob1(true);
    cout<<boolalpha;
    ob.xuat();
    ob.xuat();
//    ob.view();
}
