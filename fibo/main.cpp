#include <bits/stdc++.h>
using namespace std;
bool apare(int a, int x[100],int max){
    for (int i=0;i<max;i++)
        if (x[i]==a)
        return 1;
    return 0;
}
int fibonacci(int v[100],int x[100],int i,int n,int max){
    if (i==0)
        return 0;
    else
            if (apare(v[i],x,max)==1)
                return 1+fibonacci(v,x,i-1,n,max);
            else return fibonacci(v,x,i-1,n,max);

}
int main()
{
    int v[100],x[100],n,i,k,max=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>v[i];
        if (v[i]>max)
            max=v[i];
    }
    i=2;
    int c, b, a;
    a = 1;
    b = 1;
    x[0]=1;
    x[1]=1;
    while (i<max)
    {
        c = b + a;
        a = b;
        b = c;
        x[i]=c;
        i++;
    }
    cout<<fibonacci(v,x,n-1,n,max);

}
