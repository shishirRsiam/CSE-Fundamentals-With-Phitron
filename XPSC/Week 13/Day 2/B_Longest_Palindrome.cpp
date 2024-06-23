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


/*Time   :   22:34:08
Date  	 :   23-06-2024
Author   :   shishirRsiam
File  	 :   B_Longest_Palindrome.cpp*/


bool ispalindrome(str s)
{
    int i = 0, j = s.size()-1;
    while(i < j)
        if(s[i++] != s[j--]) return false;
    return true;
}

int main()
{
    code by shishirRsiam

    int n, m; cin>>n>>m;

    map<str,bool>mp;
    int long_size = 0;
    str s, long_palindrome;
    loop(0,i,n)
    {
        cin>>s;
        if(ispalindrome(s))
        {
            if(int(s.size()) > long_size)
            {
                long_size = s.size();
                long_palindrome = s;
            }
        }
        else mp[s] = true;
    }

    deque<str>dq;
    int ans_size = long_size;

    if(long_size)
        dq.push_back(long_palindrome);

    for(auto [a, b]:mp)
    {
        s = a;
        reverse(bee(s));
        if(mp[s] and mp[a])
        {
            mp[a] = mp[s] = false;
            dq.push_back(a);
            dq.push_front(s);
            ans_size += (a.size() * 2);
        }
    }

    cout<<ans_size<<by 

    if(ans_size)
    {
        for(auto ss:dq)
            cout<<ss;
        cout<<by 
    }

    return 0;
}