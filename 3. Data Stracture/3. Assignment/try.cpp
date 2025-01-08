#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;
        if(a==b) cout<<"Bob\n";
        else a > b ? cout<<"Bob\n" : cout<<"Alice\n";
    }
    return 0;
}