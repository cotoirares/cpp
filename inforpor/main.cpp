#include <bits/stdc++.h>
using namespace std;
int n,x,m,p,cn,c;
int main()
{
    cin>>n;
    x=0;
    m=0;
    p=1;
    while(x<10)
    {
        cn=n;
        while(cn!=0)
        {
            c=cn%10;
            cn/=10;
            if(c==x)
            {
                m=c*p+m;
                p*=10;
            }
        }x+=2;

    }
    cout<<m;
}
