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
#define print(x) for(auto v:x) cout<<v<<"\n";
using namespace std;


/*Time   :   19:53:27
Date  	 :   06-06-2024
Author   :   shishirRsiam
File  	 :   B_Karen_and_Coffee.cpp*/



int main()
{
    code by shishirRsiam

    int n, k, q, a, b; cin>>n>>k>>q;
    int N = 2e5+5;
    vec diff(N);
    while(n--)
    {
        cin>>a>>b;
        diff[a]++;
        diff[b+1]--;
    }
    vec ok(N);
    for(int i=1;i<N;i++)
    {
        diff[i] += diff[i-1];
        ok[i] = ok[i-1];
        if(diff[i] >= k) ok[i]++;
    }

        
    // print(diff);
    // print(ok);
    while(q--)
    {
        cin>>a>>b;
        cout<<ok[b] - ok[a-1]<<by;
    }

    return 0;
}