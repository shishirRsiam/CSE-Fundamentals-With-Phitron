#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


/*Time   :   00:40:31
Date  	 :   06-06-2024
Author   :   shishirRsiam
File  	 :   Restaurant_Customers.cpp*/



int main()
{
    code by shishirRsiam

    int n,a,b; cin>>n;
    map<int,int>mp;
    while(n--)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }

    int ans = 0, sum = 0;
    for(auto [x, y]:mp)
    {
        sum += y;
        ans = max(ans, sum);
    }
    cout<<ans<<by 
    return 0;
}