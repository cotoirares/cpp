#include <bits/stdc++.h>
using namespace std;

vector <int> solutieCandidat;

struct perechi {
    int x;
    int y;
    int z;
};

int n;
perechi v[105];
int prim() {
    return 1;
}

int ultim() {
    return n;
}

int urmator(int elem) {
    return elem + 1;
}

bool candidatValid() {
    for (auto it = solutieCandidat.begin(); it != solutieCandidat.end() - 1; it++)
        if (*it == solutieCandidat.back())
            return false;
    return true;
}

bool esteSolutie() {
    return solutieCandidat.size() == n;
}

int fact(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++)
        prod *= i;
    return prod;
}

void procesareSolutie() {
    int i = 0, j = 0, p = 0, c = 0;
    while (j <= solutieCandidat.size()) {
        v[i].x = solutieCandidat[j++];
        v[i].y = solutieCandidat[j++];
        v[i].z = solutieCandidat[j++];
        c++;
        if (c==n)
        {
            i++; c = 0;
        }
    }
    p = i - 1;
    for (i = 0; i < p; i++)
        cout << v[i].x << " " << v[i].y << " " << v[i].z << '\n';
}

void backtracking() {

    for (auto elem = prim(); elem <= ultim(); elem = urmator(elem)) {
        solutieCandidat.push_back(elem);

        if (candidatValid()) {
            if (esteSolutie())
                procesareSolutie();
            backtracking();
        }
        solutieCandidat.pop_back();
    }
}

int main()
{
    cin >> n;
    backtracking();
}

