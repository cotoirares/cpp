#include <bits/stdc++.h>
#include <string>
using namespace std;
ifstream in("perechi.in");
string s[6200000];

bool comparare(string s1,string s2)
{
    char v[17]="000000000000000";
    cout<<v<<'\n';
    for(int i=0; i<s1.length(); i++)
    {
        if (s1[i]>='0' && s1[i]<='9')
            v[s1[i]-'0']='1';
        else
            v[s1[i]-'A'+10]='1';
    }
    cout<<v<<'\n'<<'\n';

    for(int i=0; i<s2.length(); i++)
    {
        if (s2[i]>='0' && s2[i]<='9')
            if (v[s2[i]-'0']=='1')
                return false;
            else
                v[s2[i]-'0']='1';
        else if(v[s2[i]-'A'+10]=='1')
            return false;
        else
            v[s2[i]-'A'+10]='1';
    }
    cout<<v<<'\n'<<'\n';
    cout<<v<<'\n';
    for (int i=0; i<16; i++)
        if (v[i]!='1')
            return false;
    return true;
}

int main()
{
    int n,i=0,c=0,j;
    string x;
    while(in>>x)
        s[i++]=x;
    i--;
    n=i;
    for (i=0; i<=n; i++)
    {
        for (j=i+1; j<=n; j++){
            cout<<s[i]<<" "<<s[j]<<'\n';
            if (comparare(s[i],s[j]))
                c++;
        }
    }
    cout<<c;
}
