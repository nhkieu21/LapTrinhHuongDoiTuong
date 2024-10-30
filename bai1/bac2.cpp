#include <bits/stdc++.h>
using namespace std;

class pt
{
private:
    int a,b,c,data;
    double x1,x2;
public:

    pt(int a1, int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
        data=b*b-4*a*c;
        x1=(-b+sqrt(data))/(2*a);
        x2=(-b-sqrt(data))/(2*a);

    }
    void Hienthi()
    {
        if (data>0) {cout << x1<<" "<<x2<<"\n";}
        else if (data==0) {cout<<x1<<"\n";}
        else {cout<<"vo nghiem \n";}
    }

};

main()
{
    pt A(1,2,2);
    A.Hienthi();
}
