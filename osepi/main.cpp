#include <bits/stdc++.h>
using namespace std;
ifstream in("tort.in");
ofstream out("tort.out");
int v[200005];
int main()
{
    int n,c=0,d=1,x;
    in>>n;
    for(int i=0; i<n; ++i)
        in>>v[i];
    for (x=2;x<=n;++x)
        d+=2;
    out<<d-2;
}
