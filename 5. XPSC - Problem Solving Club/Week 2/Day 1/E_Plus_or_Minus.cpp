#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int a, b, c; cin>>a>>b>>c;
        cout<<(a+b==c?"+":"-")<<"\n";
    }

    return 0;
}