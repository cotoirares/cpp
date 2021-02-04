#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int factorial(int x){
    ll prod=1;
    int cf;
    if (x!=0){
        for (cf=1;cf<=x;cf++){
            prod*=cf;
        }
    }
    return prod;
}


int main()
{
    int x;cin>>x;cout<<factorial(x);
}
