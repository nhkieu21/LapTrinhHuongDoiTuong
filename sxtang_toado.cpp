#include <bits/stdc++.h>

using namespace std;
struct toado
{
    int x,y;
};
int n=3;
toado b[]={{2,3},{1,4},{5,2}};

bool myfunc(toado A, toado B) {return A.x>B.x;}
void xemarr()
{
    for (int i=0;i<n;++i)
        cout<<"("<<b[i].x<<" , "<<b[i].y<<") ";
}
int main ()
{
    sort(b,b+n,myfunc);
    xemarr();
}
