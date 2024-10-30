#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<char,int> mymap;
    mymap.insert(pair<char,int>('a',100));
    mymap.insert(pair<char,int>('z',200));
    pair<map<char,int>::iterator,bool> ret;
    ret=mymap.insert(pair<char,int>('z',500));
    if (ret.second==false)
    {
        cout<<"element 'z' already existed ";
        cout<<"with value of "<<ret.first->second<<"\n";
    }
}
