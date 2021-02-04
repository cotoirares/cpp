#include <bits/stdc++.h>
using namespace std;

ifstream in("soarece1.in");
ofstream out("soarece1.out");
char v[11][11];
queue <pair<int,int> >q;
void modi(){
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            if (v[i][j]=='_')
                v[i][j] = 0;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            if (v[i][j]="S")
                break;
}
int main()
{
    int i,j,n,m;
    for (i=1;i<=n;i++)
        for (j=1;j<=m;j++)
            in>>v[i][j];
    modi();



}
