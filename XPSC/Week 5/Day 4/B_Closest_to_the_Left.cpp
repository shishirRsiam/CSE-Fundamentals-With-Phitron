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
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;


int binarySearch(vec &a, int val)
{
    int n = a.size();
    int i = 0, j = n-1, ans = -1;
    while(i<=j)
    {
        ll mid = (i+j)/2;
        if(val >= a[mid]) ans = mid, i = mid+1;
        else j = mid-1;
    }
    return ans+1;
}

void testcase()
{
    int n,m; cin>>n>>m;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    while(m--)
    {
        int val; cin>>val;
        cout<<binarySearch(a, val)<<"\n";
    }
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 

        testcase();

    return 0;
}