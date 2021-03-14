#include <bits/stdc++.h>
using namespace std;
char s[4000005];
ifstream in("sdistante.in");
ofstream out("sdistante.out");
int diferenta(int a1,int b1,int a2,int b2){
    int c=0;
    while(a1<=b1){
        if (s[a1]!=s[a2])
            c++;
        a1++;
        a2++;
    }
    return c%1000000007;
}
int main()
{
    string str;
    in>>str;
    int n=str.size(),i,total=0,x,ind,j;
    for (i=n-1;i>=0;--i){
        s[i]=str.back();
        str.pop_back();
    }
    for (x=1;x<=n;++x){
    for (i=0;i<n;++i)
        for (ind=i+1;ind+x<n;++ind)
            total+=(diferenta(i,i+x,ind,ind+x)%1000000007);
    }
    out<<total%1000000007;
}
