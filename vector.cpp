#include <bits/stdc++.h>

using namespace std;
int main ()
{
    vector<int> x;
    for (int i=1;i<=5;i++)
        x.push_back(i);
    cout<<"Vector";
    for (vector<int>::iterator it=x.begin();it!=x.end();++it)
    {
        cout<<" "<<*it;
    }
    cout<<"\nreverse vector: ";
    for (vector <int>:: reverse_iterator rit=x.rbegin();rit!=x.rend();++rit)
        cout<<" "<<*rit;
}
