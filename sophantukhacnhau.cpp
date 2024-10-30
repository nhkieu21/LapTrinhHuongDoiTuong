#include<bits/stdc++.h>
using namespace std;
long x[100001],n;
int main ()
{
    cin>>n;
    long d=0;
    if (n>0)
    {
        d=1;
        for (int i=0;i<n;i++)
        {
            cin>>x[i];
        }
    }
    vector<long> a(x,x+n);
    vector<long> ::iterator it;
    sort(a.begin(),a.begin()+n);
    long t=*a.begin();
    for(it=a.begin()+1;it!=a.end();it++)
    {
        if(*it!=t) {d++;}
        t=*it;
    }
    cout<<d;
}
