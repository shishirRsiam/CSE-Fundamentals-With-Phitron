#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    int n; cin>>n;
    int N = n*(n-1)/2;
    vec a(N);
    loop(0,i,N) cin>>a[i];

    sort(bee(a));
    int idx = -1, x = n-1;
    while(idx<(N-1))
    {
        idx += x--;
        cout<<a[idx]<<" ";
    }
    cout<<a.back()<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}