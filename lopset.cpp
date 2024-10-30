#include<bits/stdc++.h>
using namespace std;
int main ()
{
    set<int> X;
    for (int i=1;i<5;i++)
    {
        X.insert(i*3);
    }
    for(int i=0;i<10;i++)
    {
        if (X.count(i)!=0)
        {
            cout<<i<<" is an element of X \n";
        }
        else {cout<<i<<" is not an element of X \n";}
    }
}
