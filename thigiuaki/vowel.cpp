#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class vowel
{
private:
    string s;
    int dem,i;
public:
    void nhap ()
    {
        getline(cin,s);
    }

    void xuat()
    {
        dem=0;
        for (i=0; i<s.size(); i++)
        {
            switch(s[i])
            {
            case 'a':
            case 'o':
            case 'e':
            case 'u':
            case 'i':
            case 'A':
            case 'O':
            case 'E':
            case 'U':
            case 'I':
                dem++;
            }
        }
        cout<<dem;
    }

};
int main ()
{
    vowel x;
    x.nhap();
    x.xuat();
}
