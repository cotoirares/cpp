#include <iostream>
using namespace std;

int euclid(int a, int b)
{
        if (b==0)
            return a;
        else
            euclid(b,a%b);
}
int main()
{
    int a,b;
    cin>>a,b;
    cout<<euclid(a,b);
}
