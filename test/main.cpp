#include <bits/stdc++.h>
using namespace std;
int n,v[105];
void citire(int i){
    if (i==n+1)
        return;
    cin>>v[i];
    citire(i+1);
}
void afisare(int st, int dr){
    if (st==dr){
        if (v[st]%2==1)
            cout<<v[st]<<" ";
        return;
    }
    else{
        int mij=(st+dr)/2;
        afisare(st,mij);
        afisare(mij+1,dr);
    }

}
int main()
{
    cin>>n;
    citire(1);
    afisare(0,n);
}
