#include<bits/stdc++.h>
using namespace std;

int main ()
{
    bitset<5> foo(string("01011"));
    cout<<boolalpha;
    for(int i=0;i<foo.size();i++)
    {
        cout<<foo.test(i)<<"\n";
    }
}
