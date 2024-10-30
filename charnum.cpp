#include <bits/stdc++.h>
#include<string.h>
using namespace std;

long long n,a[1000001],b[1000001],i;
class character
{
    string s;
public:
    void Nhap ()
    {
        getline(cin,s);
    }
    int xuat()
    {
        long long d=0;
        for (i=0;i<s.size();i++)
        {
            if (isdigit(s[i]))
                d++;
        }
        return d;
    }
};
int main ()
{
    character x;
    x.Nhap();
    cout<<x.xuat();
}
