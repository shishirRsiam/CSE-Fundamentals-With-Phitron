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




bool testcase()
{
    int n,a; cin>>n;
    map<int,int>mp;
    loop(0,i,n)
    {
        cin>>a;
        mp[a]++;
    }

    int cnt = 0;
    loop(0,i,n+1)
    {
        if(mp[i]==1) cnt++;
        if(cnt == 2 or mp[i]==0)
        {
            cout<<i<<by;
            return false;
        }
    }

    return true;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}