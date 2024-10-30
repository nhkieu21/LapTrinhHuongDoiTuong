#include <bits/stdc++.h>
using namespace std;

class CHA
{
public:
    bool giau, thongminh;
    CHA ()
    {
        giau=true;
        thongminh=true;
    }
    void thuoctinh()
{
    cout<<"Giau: "<<giau<<"\n";
    cout<<"Thong minh: "<<thongminh<<"\n";
    cout<<"Kinh doanh hieu qua "<<"\n";
}
};

class CON:public CHA
{
    private: bool deptrai;
    public:
        CON(bool x) {deptrai=x;}
    void thuoctinh()
    {
        CHA::thuoctinh();
        cout<<"Dep trai: "<<deptrai<<"\n";
        cout<<"Choi the thao tot "<<"\n";
    }
};
int main ()
{
    CON A(true);
    cout<<"Nguoi con trai nay: \n";
    cout<<boolalpha;
    A.thuoctinh();
}
