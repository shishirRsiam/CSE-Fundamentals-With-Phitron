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


/*Time   :   20:16:42
Date  	 :   11-06-2024
Author   :   shishirRsiam
File  	 :   C_Alphabetic_Removals.cpp*/

void helper(string &s, char ch, int &k)
{
    int i = s.find(ch), n = s.size();
    while(k and i<n and i != -1)
    {
        // if(s[i]==ch)
        {
            k--;
            s[i] = ' ';
        }
        i = s.find(ch);
    }
}

bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n,k; cin>>n>>k;
    str s; cin>>s;

    char last;
    vector<bool>seen(200);
    map<char, ll>mp;
    for(char ch:s) mp[ch]++;
    for(auto [ch, cnt]:mp)
    {
        if(cnt <= k)
        {
            k -= cnt;
            seen[ch] = true;
        }
        else if(cnt > k) 
        {
            last = ch;
            break;
        }
    }

    for(char ch:s)
    {
        if(!seen[ch])
        {
            if(ch == last and k) k--;
            else cout<<ch;
        }
    }

    // for(char ch:s)
    //     if(ch != ' ') cout<<ch;
    // cout<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    // int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}