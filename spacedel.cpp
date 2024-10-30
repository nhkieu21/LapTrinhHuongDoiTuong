#include <bits/stdc++.h>
#include<string.h>
using namespace std;

long long n,a[1000001],b[1000001],i;
class spacedel
{
    string s;
public:
    void Nhap ()
    {
        getline(cin,s);
    }
    int xuat()
    {
        for (i=0; i<s.size(); i++)
        {
            while (s[i]==' ' && s[i-1]==' ')
            {
                s.erase(i,1);
            }
        }
        cout<< s;
    }
};
int main ()
{
    spacedel x;
    x.Nhap();
    x.xuat();
}
