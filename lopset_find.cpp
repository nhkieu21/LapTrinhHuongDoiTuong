#include<bits/stdc++.h>
using namespace std;
int main ()
{
    set<int> X;
    set<int> ::iterator it;
    for (int i=1;i<=5;i++)
    {
        X.insert(i*10);
    }
    it=X.find(20);
    X.erase(it);
    X.erase(X.find(40));
    cout<<"X contanis ";
    for (it=X.begin();it!=X.end();it++)
    {
        cout<<*it<<" ";
    }
}
