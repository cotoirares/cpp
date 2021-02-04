#include <bits/stdc++.h>
#include <string>
using namespace std;
char v[100005];
int p[30];
int main()
{
    int i,n,l,b=0,max=0,ind,ls,is=0,id=0,cd,cds,cdd,ok1,ok2,b1,b2;
    string s;
    cin>>s;
    cin>>n;
    l=s.length();
    p[1]=2;
    for (int i=2; i<=29; i++)
        p[i]=p[i-1]*2;
    strcpy(v, s.c_str());
    for (i=0; i<l; i++)
    {
        ls=0;
        b=0;
        cd=0;
        for (ind=i+1; ind<l; ind++)
        {
            if (v[i]==v[ind])
            {
                ls++;
                cd=0;
                continue;
            }
            else
            {
                b+=p[cd+1];
                cd++;
                if (b>n)
                {
                    if (ls+1>max)
                        max=ls+1;
                    break;
                }
                else
                    ls++;
            }
        }
        if (ind==l)
            if (ls+1>max)
                max=ls+1;
        ls=0;
        b=0;
        cd=0;
        for (ind=i-1; ind>0; ind--)
        {
            if (v[i]==v[ind])
            {
                ls++;
                cd=0;
                continue;
            }
            else
            {
                b+=p[cd+1];
                cd++;
                if (b>n)
                {
                    if (ls+1>max)
                        max=ls+1;
                    break;
                }
                else
                    ls++;
            }
        }
        if (ind==l)
            if (ls+1>max)
                max=ls+1;
        ls=0;
        b=0;
        is=i-1;
        id=i+1;
        cdd=0;
        cds=0;
        while (b<=n)
        {
            if (is>=0)
                ok1=1;
            if (id<n)
                ok2=1;
            if (v[is]!=v[i] && !(ok1==0))
            {
                b2+=b+p[cds+1];
                if (b2>n)
                    break;
                cds++;
                if (b<=n)ls++;
            }
            if (v[id]!=v[i] && !(ok2==0))
            {
                b1=b+p[cdd+1];
                if (b1>n)
                    break;
                cdd++;
                if (b<=n) ls++;
            }
            if (v[is]==v[i])
            {
                ls++;
                cds=0;
            }
            if (v[id]==v[i])
            {
                ls++;
                cdd=0;
            }
            if (b>n)
            {
                if (ls+1>max)
                    max=ls+1;
                break;
            }
            if (is>=0){
                is--;
            }
            else ok1=0;
            if (id<n)
                id++;
            else ok2=0;
            if (is<0 && id>=n)
            {
                if (ls+1>max)
                    max=ls+1;
                break;
            }
        }

    }
    cout<<max;
}
