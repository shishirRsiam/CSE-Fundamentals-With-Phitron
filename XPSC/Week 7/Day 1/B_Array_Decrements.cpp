#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
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




void testcase()
{
    int n; cin>>n;
    vec a(n), b(n);
    loop(0,i,n) cin>>a[i];
    loop(0,i,n) cin>>b[i];

    
    if(a[0] == b[0] and b[0] != 0)
    {
        int i = 0;
        while(i<n)
        {
            if(a[i] != b[i])
            {
                pn;
                return;
            }
            i++;
        }
        py;
        return;
    }

    ll dif = INT_MAX;
    loop(0,i,n)
    {
        if(b[i] != 0) dif = min(dif, a[i]-b[i]);
        if(a[i]<b[i])
        {
            pn;
            return;
        }
    }
    if(dif == INT_MAX)
    {
        py; 
        return;
    }

    loop(0,i,n)
    {
        if ((a[i] - b[i] > dif) or (b[i] != 0 & a[i] - b[i] < dif))
        {
            pn;
            return;
        }
    }

    /*
    while(i<n-1)
    {
        if(abs(a[i]-a[i+1]) != abs(b[i]-b[i+1]))
        {
            pn;
            return;
        }
        if(a[i]<b[i])
        {
            pn;
            return;
        }
        i++;
    }
    */

    py;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}