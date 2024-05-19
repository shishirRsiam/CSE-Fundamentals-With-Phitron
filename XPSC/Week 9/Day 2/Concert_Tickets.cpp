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
    int n,k; cin>>n>>k;
    int x;
    multiset<int>ml;
    while(n--)
    {
        cin>>x;
        ml.insert(x);
    }
    while(k--)
    {
        cin>>x;
        auto it = ml.upper_bound(x);
        if(it == ml.begin()) cout<<"-1\n";
        else 
        {
            it--;
            cout<<*it<<"\n";
            ml.erase(it);
        }
    }
    return true;
}

int main()
{
    code by shishirRsiam

    int t = 1;
    while(t--) 

        testcase();

    return 0;
}