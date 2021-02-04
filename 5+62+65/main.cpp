#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,i=1,c;
    cin>>n;
    cin>>x;
    cin>>y;
    int cx=x,cy=y;
    while(cx!=cy)
    {
        if(cx>cy)
            cx=cx-cy;
        else
            cy=cy-cx;
    }
    c=cx;
    i=2;
    while (i<=n)
    {
        cin>>y;
        cx=x;
        cy=y;
        while(cx!=cy)
        {
            if(cx>cy)
                cx=cx-cy;
            else
                cy=cy-cx;
        }
        if (cx<c)
            c=cx;
        i++;
        x=y;
    }
}
