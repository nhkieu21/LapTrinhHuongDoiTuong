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
        if (x1>0)
        {
            cout<<sqrt(x1)<<" "<<-sqrt(x1)<<" ";
        }
        else if (x1==0)
        {
            cout<<0<<" ";
        }

        if (x2!=x1)
        {
            if (x2>0)
            {
                cout<<sqrt(x2)<<" "<<-sqrt(x2)<<" ";
            }
            else if (x2==0)
            {
                cout<<0<<" ";
            }
        }
        if (x1<0 && x2<0)
        {
            cout<<"vo nghiem ";
        }
    }

};

main()
{
    pt A(1,-2,1);
    A.Hienthi();
}
