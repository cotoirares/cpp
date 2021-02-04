#include <bits/stdc++.h>
using namespace std;
ifstream in("nfrac.in");
ofstream out("nfrac.out");

int binarySearch(int a,int b,int x)
{

}

int main()
{
    double t,a,b,x,y,l;
    long long c=0;
    in>>t;
    while(t--)
    {
        in>>a>>b;
        c=0;
        l=a+b-1;
        for (x=1; x<=l; x++)
        {
            //c+=binarySearch(a,b,x);
            int c1=0,st=1,dr=a+b-x,mid;
            while(st<=dr)
            {
                mid=(st+dr)/2;
                if ((x/mid)<=(a/b))
                    dr=mid-1;
                if ((x/mid)>=(b/a))
                    st=mid+1;
            }
            for (int i=1; i<=mid; i++)
                if (((x/i)>=(a/b))&&((x/i)<=(b/a)))
                    c1++;
            c+=c1;
        }
        out<<c<<'\n';
    }
}
