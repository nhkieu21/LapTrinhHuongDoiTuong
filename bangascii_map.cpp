#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<int,char> ASCII;
    for (int i=0;i<=255;i++)
    {
        ASCII[i]=i;
    }
    map<int,char> ::iterator it;
    for(it=ASCII.begin();it!=ASCII.end();it++)
    {
        cout<<it->first<<" <=> "<<it->second<<"\n";
    }
}
