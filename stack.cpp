#include <bits/stdc++.h>

using namespace std;

template <class T>
class mystack
{
    int top;
    T a[100];
public:
    mystack()
    {
        top=0;
    }
    void push (T x)
    {
        a[++top] =x;
    }
    T pop ()
    {
        return a[top--];
    }
    bool isEmpty()
    {
        return top==0;
    }
};
int main ()
{
    int n=13;
    mystack <int> s;
    while (n>0)
    {
        s.push(n%2);
        n=n/2;
    }
    while (!s.isEmpty())
    {
        cout<<s.pop();
    }
}
