#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ll a,b; cin>>a>>b;

    ll x = a*2, ans = 1;
    while(x<=b) ans++, x *= 2;
    cout<<ans;
    return 0;
}  