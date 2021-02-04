#include <bits/stdc++.h>
using namespace std;
deque<int>fibo;
int fibonacci(int n)
{
    int q=0,s=0,m=0;
    if (q==n){
        fibo.pop_back();
        return fibo.back();
    }
    else{
        s+=fibo.back();
        fibo.pop_back();
        s+=fibo.back();
        m=fibo.back();
        fibo.pop_back();
        fibo.push_back(s);
        fibo.push_back(m);
        q++;
        return fibonacci(q);
    }
}
int main()
{
    int n;
    cin>>n;
    fibo.push_back(1);
    fibo.push_back(1);
    cout<<fibonacci(n);
}
