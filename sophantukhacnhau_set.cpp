#include<bits/stdc++.h>
using namespace std;
long x[100001],n;
int main ()
{
    set <long> a;
    a.clear();
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>x[i];
        a.insert(x[i]);
    }
    cout<<a.size();
}
