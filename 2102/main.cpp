#include <bits/stdc++.h>
using namespace std;

int sum_cifra_control(long long a, long long b){
    int c = 0;
    while (a<=b){
        a+=9;
        c++;
    }
    return c;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<sum_cifra_control(a,b);
}
