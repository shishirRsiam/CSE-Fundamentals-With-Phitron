#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b; cin>>a>>b;

    int ans = max(a, b);
    if(ans==a and ans==b) ans += ans;
    else ans += ans-1;

    cout<<ans<<"\n";

    return 0;
}


// https://atcoder.jp/contests/abc124/tasks/abc124_a