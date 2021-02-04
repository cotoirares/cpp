#include <bits/stdc++.h>
using namespace std;

int oglindit(int a, int& b)
{
    if (a==0)
        return b;
    else
    {
        b*=10;
        b+=a%10;
        a/=10;
        return oglindit(a,b);
    }
}
int descompunere(int n,int a, int b)
{
    if (a==n)
        return 0;
    else
    {
        b=0;
        b=oglindit(a,b);
        if (a+b==n)
        {
            cout<<a<<" "<<b<<'\n';
            a++;
            b=0;
            return descompunere(n,a,b);
        }
    }
}
int main()
{
    int n,a,b=0;
    cin>>n;
    cout<<descompunere(n,a,b);
}
