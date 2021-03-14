#include <bits/stdc++.h>
using namespace std;
int v[1005][1005],cop[1005][1005];
ifstream in("labirint.in");
ofstream out("labirint.out");
int n,m;
void margini()
{
    for (int i=0; i<=n+1; ++i)
    {
        v[i][n+1]=2;
        v[i][0]=2;
    }
    for (int j=0; j<=n+1; ++j)
    {
        v[0][j]=2;
        v[n+1][j]=2;
    }
}
int determinare_drum(int i_curent,int j_curent)
{
    if (i_curent ==n && j_curent==m)
        return 1;
    if (cop[i_curent-1][j_curent]==0) //deasupra
        return 1+determinare_drum(i_curent-1,j_curent);
    if (cop[i_curent][j_curent+1]==0) //dreapta
        return 1+determinare_drum(i_curent,j_curent+1);
    if (cop[i_curent+1][j_curent]==0) //sub
        return 1+determinare_drum(i_curent+1,j_curent);
    if (cop[i_curent][j_curent-1]==0) //stanga
        return 1+determinare_drum(i_curent,j_curent-1);
    else
    return 5000;
}
void copiere()
{
    for (int i=0; i<=n; ++i)
        for (int j=0; j<=m; ++j)
            cop[i][j]=v[i][j];
}
int main()
{
    int i,j;
    in>>n>>m;
    for (i=1; i<=n; ++i)
        for (j=1; j<=m; ++j)
            in>>v[i][j];
    margini();
    copiere();
    int min=determinare_drum(1,1);
    for (i=1; i<=n; ++i)
        for (j=1; j<=m; ++j){
        cop[i][j]=0;
        int pas=determinare_drum(1,1);
        if (pas<min){
            v[i][j]=0;
        }
        cop[i][j]=1;
    }
    for (i=1; i<=n; ++i){
        for (j=1; j<=m; ++j)
        out<<v[i][j]<<" ";
        out<<'\n';
    }

}
