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
#define print(x) for(auto v:x) cout<<v;
using namespace std;



int main()
{
    code by shishirRsiam

    str s; cin>>s;

    map<char,int>mp;
    for(char ch:s) mp[ch]++;

    char odd;
    int cnt = 0;
    for(auto x:mp)
    {
        char ch = x.first;
        int val = x.second;
        if(val%2==1)
        {
            odd = ch;
            cnt++;
        }
    }

    if(cnt > 1)
    {
        cout<<"NO SOLUTION\n";
        return 0;
    }

    deque<char>ans;

    if(cnt==1) 
    {
        int val = mp[odd];
        while(val--) ans.push_front(odd);
        mp[odd] = 0;
        mp.erase(odd);
    }

    for(auto x:mp)
    {
        char ch = x.first;
        int val = x.second;
        while(val)
        {
            ans.push_front(ch);
            ans.push_back(ch);
            val -= 2;
        }
    }
    print(ans);
    return 0;
}