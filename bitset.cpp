#include<bits/stdc++.h>
using namespace std;

int main ()
{
    bitset<4> foo;
    cin>>foo;

    cout<<boolalpha;
    cout<<"all: "<<foo.all()<<"\n";
    cout<<"any: "<<foo.any()<<"\n";
    cout<<"none: "<<foo.none()<<"\n";
}
