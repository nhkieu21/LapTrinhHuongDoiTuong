#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    getline(cin,s);
    map<char,int> table;
    map<char,int> ::iterator it;
    for (int i=0;i<s.length();i++)
    {
        table[s[i]]++;
    }
    cout<<"so luong ky tu trong xau s: " <<"\n";
    for (it=table.begin();it!=table.end();it++)
    {
        cout<<it->first<<" "<<it->second<<"\n";
    }
}
