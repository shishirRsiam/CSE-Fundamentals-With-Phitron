#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<int,char>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define beer(x) x.rbegin(), x.rend()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false)
#define shishirRsiam cin.tie(NULL)
using namespace std;

void testcase()
{
    str s; cin>>s;
    vector<int> freq;

    int haha = 1;
    for(char c:s)
    {
        freq.pb((c-'a'+1));

    }
    
    int start = s[0]-'a'+1, end = s.back()-'a'+1;
    vec ans;
    if(start > end)
    {
        sort(beer(freq));
        bool flag = false;
        for(int v:freq)
        {
            if(v==start) flag = true;
            if(flag) ans.pb(v);
            if(v==end) break;
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<"\n";
    }
    else 
    {
        sort(bee(freq));
        bool flag = false;
        for(int v:freq)
        {
            if(v==start) flag = true;
            if(flag) ans.pb(v);
            if(v==end) break;
        }
        for(auto x:ans) cout<<x<<" ";
        cout<<"\n";
    }
    // for(auto x:st) cout<<x;
    // else cout<<"\n";
}

int main()
{
    code;
    shishirRsiam;

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}
