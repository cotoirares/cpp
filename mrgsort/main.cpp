// se da o placa dreptunghiulara de dimensiuni cunoscute si coordonatele unor defecte ale acestei placi.
//se cere sa se det o bucata dr din aceasta placa de dimensiune maxima care sa nu contina niciun defect
//decupam placa doar prin linii orizontale/verticale
#include <bits/stdc++.h>
using namespace std;
int n,m,ind=-1,amax;
int a[100], b[100];
int defect(int x1,int y1,int x2,int y2){
    for (int i=0;i<n;++i)
        if (a[i]>x1 && a[i]<x2 &&  b[i]>y2 && b[i]<y1)
            return i;
    return -1;
}
void solve(int x1,int y1,int x2,int y2){
    int ind=defect(x1,y1,x2,y2);
    if (ind==-1){
        if ((y1-y2)*(x2-x1)>amax)
            amax=(y1-y2)*(x2-x1);}
    else{
        solve(x1,y1,x2,b[ind]);
        solve(x1,b[ind],x2,y2);
        solve(x1,y1,a[ind],y2);
        solve(a[ind],y1,x2,y2);
    }
}

int main()
{
   int x1,y1,x2,y2,i;
   cin>>x1>>y1>>x2>>y2;
   cin>>n;
   for (i=0;i<n;++i)
    cin>>a[i]>>b[i];
   solve(x1,y1,x2,y2);
   cout<<amax;

}
