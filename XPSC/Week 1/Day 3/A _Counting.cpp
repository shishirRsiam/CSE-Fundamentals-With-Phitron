#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin>>a>>b;

    int ans = 0;
    if(a<b) ans = (b-a)+1;
    cout<<ans<<"\n";

    return 0;
}

// https://atcoder.jp/contests/abc209/tasks/abc209_a