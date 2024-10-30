#include <bits/stdc++.h>

using namespace std;
int main ()
{
    vector<int> x;
    for (int i=1;i<=10;i++)
        x.push_back(i);
    x.erase(x.begin()+5);       //xoa phan tu thu 6
    x.erase(x.begin(), x.begin()+3);       //xoa 3 phan tu dau
    cout<<"vector";
    for (int i=0;i<x.size();++i)
    {
        cout<<" "<<x[i];
    }

}
