#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        unordered_map<int,int>mp;
        int remove = 0;
        loop(1,i,n+1)
        {
            int a; cin>>a;
            if(mp.find(a) != mp.end())
                remove = max(remove, mp[a]);
            mp[a] = i;
        }
        cout<<remove<<"\n";
    }
    return 0;
}