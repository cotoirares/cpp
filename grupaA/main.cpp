#include <bits/stdc++.h>
using namespace std;

int** allocMatrix(int n1, int n2) {
    int** a = (int**)malloc(sizeof(int*) * n1 + sizeof(int) * n1 * n2);
    int* ptr = (int*)(a + n1);
    for (int i1 = 0; i1 < n1; ++i1) {
        a[i1] = ptr;
        ptr += n2;
    }
    return a;
}

void dynamicLine(int i,int j,int** A, int** B)
{
    int max=-1,ok=0,ok1=0;
    for (int j1=0; j1<=j; j++)
    {
        if (A[i][j1]==B[i][j-1])
            ok=1;
        if (A[i][j1]==B[i-1][j])
            ok1=1;
        if (A[i][j1]>max)
            max=A[i][j1];
    }
    if (ok || ok1)
        B[i][j]=max+1;
    if (ok && !ok1)
        B[i][j]=B[i-1][j];
    if (!ok && ok1)
        B[i][j]=B[i][j-1];
}
void dynamicColumn(int i,int ** A, int ** B)
{
    if (A[i][0]<=A[i-1][0])
        B[i][0]=A[i-1][0];
    else
        B[i][0]=A[i][0]+1;

}
void solve(int N1, int N2, int** A, int** B)
{
    B[0][0]=A[0][0]+1;
    for (int i=0; i<N1; i++)
    {
        dynamicColumn(i,A,B);
        for (int j=1; j<N2; j++)
            dynamicLine(i,j,A,B);
    }
}
int main()
{
    FILE* f = fopen("input.txt", "r");
    int n1, n2;
    assert(fscanf(f, "%d%d", &n1, &n2) == 2);

    int** a = allocMatrix(n1, n2);
    for (int i1 = 0; i1 < n1; ++i1) {
        for (int i2 = 0; i2 < n2; ++i2) {
            assert(fscanf(f, "%d", a[i1] + i2) == 1);
        }
    }
    fclose(f);

    int** b = allocMatrix(n1, n2);
    solve(n1, n2, a, b);
    free(a);

    f = fopen("output.txt", "w");
    for (int i1 = 0; i1 < n1; ++i1) {
        for (int i2 = 0; i2 < n2; ++i2) {
            fprintf(f, "%d%c", b[i1][i2], " \n"[i2 == n2 - 1]);
        }
    }
    free(b);
    fclose(f);
    return 0;
}
