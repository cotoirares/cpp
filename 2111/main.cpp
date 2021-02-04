#include <bits/stdc++.h>
using namespace std;
int v[100005],n;

int main()
{
    int k,q=0,s=0,maax,i;
    cin>>n>>k;
    for (i=1; i<=n; i++)
        cin>>v[i];
    for (i=1;i<=k;i++)
        s+=v[i];
    maax=s;
    for (i=k+1; i<=n; i++)
    {
        s=s+v[i]-v[i-k];
        if (s>maax)
            maax=s;
    }
    cout<<maax;
}
