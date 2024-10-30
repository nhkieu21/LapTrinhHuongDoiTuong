#include <bits/stdc++.h>

using namespace std;
bool kt(int x)
{
    vector <int> d;
    while (x>0)
    {
        d.push_back(x%10);
        x=x/10;
    }
    int left=0, right=d.size()-1;
    while(left<=right)
    {
        if(d[left]!=d[right]) return false;
        left++;right--;
    }
    return true;
}
int main ()
{
    int n;
    cin>>n;
    if (kt(n))
    {
        cout<<"so doi xung";
    }
    else cout<<"so khong doi xung";
}
