#include <bits/stdc++.h>
using namespace std;
int v[200000], n;
deque<int>indici;

int main()
{
    int x, t, n, W, suma = 0, i;
    cin >> t;
    while (t--) {
        cin >> n >> W;
        suma=0;
        for (i = 1; i <= n; i++) {
            cin >> v[i];
            suma += v[i];
            indici.push_front(i);
            if (suma > W && i==n) {
                cout<<"-1"<<'\n';
            }
            if (suma > W) {
                indici.pop_front();suma-=v[i]; continue;
            }
            if (suma < (W / 2))
                continue;
            if (suma >= (W / 2) && (suma <= W))
            {
                cout << indici.size()<<'\n';
                while (!indici.empty()) {
                    cout << indici.back() << " ";
                    indici.pop_back();
                }
                break;
            }
            cout << '\n';
        }
    }


}
