#include <bits/stdc++.h>
using namespace std;



class Time
{
    int a,b,c;
public:

    Time (int a1, int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    void xuat()
    {
        if (c==59)
        {
            if (b==59)
            {
                c=0;
                b=0;
                if (a==23)
                {
                    a=0;
                }
                else
                {
                    a++;
                }
            }
            else
            {
                c=0;
                b++;
            }
        }
        else
        {
            c++;
        }


            cout<<a<<" "<<b<<" "<<c;

    }

};

int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    Time A(a,b,c);
    A.xuat();
//    ob.view();
}
