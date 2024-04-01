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

    int n; cin>>n;
    stack<str>st;

    loop(0,i,n)
    {
        str s; cin>>s;
        st.push(s);
    }

    vector<str>tabopen;
    unordered_map<str,int>mp;
    while(!st.empty())
    {
        str s = st.top(); st.pop();
        if(mp[s] == 0) tabopen.pb(s);
        if(mp[s] == 0) mp[s]++;
    }

    for(auto x:tabopen) 
    {
        int sz = x.size();
        cout<<x.substr(sz-2);
    }

    return 0;
}