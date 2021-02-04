#include <bits/stdc++.h>
using namespace std;

int main()
{
    int fr[10], i, nrnou = 0, n;
    cin>>n;
    for (i = 0; i <= 10; i++)
        fr[i] = 0;

    while (n > 0) {
        fr[n % 10]++;
        n /= 10;
    }
    for (i = 9; i >= 0; i--) {
        if (fr[i] >= 1)
            nrnou = nrnou * 10 + i;
    }

    cout<<nrnou;

}
