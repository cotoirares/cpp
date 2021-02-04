#include <bits/stdc++.h>
using namespace std;
ifstream in("media.in");
ofstream out("media.out");
long long m,v[5000][100],primem[100],max=0,lim;
void descomp(long long i)
{
    long long d=2;
    long long x=v[i][0];
    while (x!=1)
    {
        while (x%d==0)
        {
            x/=d;
            v[i][d]++;
        }
        d++;
    }
}
long long descompm(long long x)
{
    long long i=2;
    while (x!=1)
    {
        while (x%i==0)
        {
            x/=i;
            primem[i]++;
        }
        i++;
    }
    return i-1;
}
bool calc(long long i,long long j)
{

}
int main()
{
    long long n,i,c=0,b;
    cin>>n>>m;
    lim=descompm(m);
    for (i=0; i<n; i++)
    {
        cin>>v[i][0];
        descomp(i);
    }
    for (i=0; i<n; i++)
        for (long long j=i; j<n; j++)
            {
                b=1;
                for (long long x=2; x<=lim; x++)
                {
                    if (primem[x]!=0)
                    {
                        long long sum=0;
                        for (long long q=j; q>=i; q--)
                            sum+=v[q][x];
                        if (primem[x]*(j-i+1)!=sum)
                            b=0;
                    }
                }
                if (b)
                    c++;
            }
    cout<<c;
}
