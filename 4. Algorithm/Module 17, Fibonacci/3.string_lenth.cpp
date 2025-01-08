#include<bits/stdc++.h>
using namespace std;

int fun_(string s, int i)
{
    if(!s[i]) return i;
    cout<<s[i]<<" "<<i<<endl;
    return fun_(s,i+1);
}

int main()
{
    string s = "SishirSiam";
    cout<<fun_(s,0)<<endl;
    return 0;
}