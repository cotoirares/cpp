#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    int a, b, n,x;
    cin >> a >> b;
    for (d = b; d >= a; d--)
    {
        int m, s = 0;
        for (m = 1; m < sqrt(d); m++)
        {
            if (d%m==0)
            {
                s += m;
                s+= (d/m);
            }
            if (s > m)
                break;
        }
        if (s == d)
            cout << m << " ";
    }

}
