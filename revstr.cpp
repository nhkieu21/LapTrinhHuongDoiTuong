#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int n,a[1000001],b[1000001],i;
class revstr
{
    string s,s1;
public:
    void Nhap ()
    {
        getline(cin,s);
    }
    long long xuat()
    {
        for (i=s.size()-1;i>=0; i--)
        {
            s1+=s[i];
        }
        cout<< s1;
    }
};
int main ()
{
    revstr x;
    x.Nhap();
    x.xuat();
}
