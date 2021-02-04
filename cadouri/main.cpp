#include <stdio.h>
#include <bits/stdc++.h>

int solve(int n, long long k, int cnt[], int m[]){
    long long j,i,found=0,sum=0,min=m[0];
    for (j=0;j<n;j++)
        if (m[j]<min)
            min=m[j];
    j=min;
    while (found==0){
        for (i=0;i<n;i++)
            if (m[i]==j){
                sum+=cnt[i];
                if (sum>=k){
                    found=1;
                    break;
                }
            }
        j++;
    }
    return j-1;
}

int main() {
    FILE *fin = fopen("cadouri.in", "r"), *fout = fopen("cadouri.out", "w");
    int n; /// first parameter for solve()
    long long k; /// second parameter for solve()
    fscanf(fin, "%d%lld", &n, &k);
    int *cnt = new int[n], *m = new int[n]; /// last parameters for solve()
    int i;
    for (i = 0; i < n; i++) {
        fscanf(fin, "%d%d", &cnt[i], &m[i]);
    }

    fprintf(fout, "%d\n", solve(n, k, cnt, m));

    delete[] cnt;
    delete[] m;
    fclose(fin);
    fclose(fout);
    return 0;
}
