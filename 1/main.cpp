#include <iostream>

using namespace std;
int n=5;
void afis(int i, int j)
{
    if(i<=n)
        if(j<=i)
        {
            cout<<j<<" ";
            afis(i,j+1);
        }
        else
        {
            cout<<endl;
            afis(i+1,1);
        }

}
int main()
{
    afis(1,1);
    return 0;
}
