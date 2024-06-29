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

bool BinarySearch(vec &a, int val)
{
    int i = 0, j = a.size();
    while(i<=j)
    {
        ll mid = (i+j)/2;
        if(a[mid]==val) return true;
        else if(a[mid] > val) j = mid-1;
        else i = mid+1;
    }
    return false;
}

void testcase()
{
    int n, m; cin>>n>>m;
    vec a(n);
    loop(0,i,n) cin>>a[i];
    while(m--)
    {
        int val; cin>>val;
        BinarySearch(a, val) ? pyn;
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