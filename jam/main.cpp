#include <bits/stdc++.h>
#define limit 1005
using namespace std;

struct activ
{
    int start;
    int stop;
};
activ v[limit],x[limit];
char m[limit];

bool sortare (activ a,activ b)
{
    return a.start<b.start;
}
int main()
{
    int n,t,cnt=1;
    cin>>t;
    while (t--)
    {
        int i,j,ind=3;
        bool ok = 1;
        cin>>n;
        for (i=1; i<=n; i++)
        {
            cin>>v[i].start>>v[i].stop;
            x[i].start = v[i].start;
            x[i].stop = v[i].stop;
        }
        sort(x+1,x+n+1,sortare);
        i=1;
        j=i+1;
        m[i]='C';
        m[i+1]='J';
        while (ind<=n)
        {
            if (x[ind].start>=x[i].stop)
            {
                i=ind;
                m[ind]='C';
            }
            else if (x[ind].start>=x[j].stop)
            {
                j=ind;
                m[ind]='J';
            }
            else
            {
                ok=0;
                break;
            }
            ind++;
        }
        if (ok!=1)
            cout<<"Case #"<<cnt<<": IMPOSSIBLE"<<'\n';
        else
        {
            cout<<"Case #"<<cnt<<": ";
            for (i=1; i<=n; i++)
                for (j=1; j<=n; j++)
                    if (v[i].start==x[j].start && v[i].stop==x[j].stop)
                        cout<<m[j];
            cout<<'\n';
        }
        cnt++;
    }
}
