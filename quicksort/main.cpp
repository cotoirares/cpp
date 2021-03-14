#include <bits/stdc++.h>
using namespace std;
int x[200005],n;
void cit(){
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>x[i];
}
void afis(){
    for (int i=0;i<n;i++)
        cout<<x[i]<<" ";
    cout<<'\n';

}
void intersch(int &a, int &b){
    swap(a,b);
}
int pivot(int st, int dr){
    int i=st, j=dr, di=1, dj=0;
    while (i<j){
        if (x[i]>x[j]){
            intersch(x[i],x[j]);
            intersch (di,dj);
        }
        i+=di;
        j-=dj;
    }
    return i;
}
void quick(int st, int dr){
    if (st<dr){
        int piv = pivot(st,dr);
        quick(st, piv-1);
        quick(piv+1, dr);
    }

}
int main()
{
    cit();
    quick(0,n-1);
    afis();

}
