#include <bits/stdc++.h>
using namespace std;
int v[105];
void minim(int st,int dr,int& min, int& indice){
    if (st==dr){
        min=v[st];
        indice=st;
    }
    else{
        int min1,min2,indice1,indice2;
        int mij=(st+dr)/2;
        minim(st,mij,min1,indice1);
        minim(mij+1,dr,min2,indice2);
        if (min1<=min2){
            min=min1;
            indice=indice1;
        }
        else{
            min=min2;
            indice=indice2;
        }
    }
}
int main()
{
   int n,i,min=0,indice=0;
   cin>>n;
   for (i=0;i<n;i++)
    cin>>v[i];
   minim(0,n-1,min,indice);
   cout<<min<<" "<<indice;
}
