#include <bits/stdc++.h>
using namespace std;
long long v[100005],x[100005];
/*int cautarebinara(int n1,int n2,int st,int dr)
{
    int c=0,mij=0;
    for (int i=0; i<n1; i++)
    {
        st=0;
        dr=n2-1;
        while (st<=dr)
        {
            mij=(st+dr)/2;
            if (v[i]<v[mij])
                dr=mij-1;
            if (v[i]>v[mij])
                st=mij+1;
            else
            {
                c++;
                break;
            }
        }
    }
    return c;
}*/
int main()
{
    int n1,n2,c=0,j=0,i=0,st=0,dr=0;
    cin>>n1>>n2;
    for (i=0; i<n1; i++)
        cin>>v[i];
    sort(v,v+n1);
    for (i=0; i<n2; i++)
        cin>>x[i];
    sort(x,x+n2);
    int mij=0;

    for (i=0; i<n1; i++)
    {
        st=0;
        dr=n2-1;
        while (st<=dr)
        {
            mij=(st+dr)/2;
            if (v[i]<x[mij])
            {
                dr=mij-1;
                continue;
            }
            if (v[i]>x[mij])
            {
                st=mij+1;
                continue;
            }
            if (v[i]==x[mij])
            {
                c++;
                break;
            }
        }
    }
    cout<<c;


}

