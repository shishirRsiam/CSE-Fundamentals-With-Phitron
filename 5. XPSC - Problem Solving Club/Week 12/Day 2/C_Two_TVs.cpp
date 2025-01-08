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


/*Time   :   23:54:52
Date  	 :   04-06-2024
Author   :   Md. Sishir Rahman Siam
File  	 :   C_Two_TVs.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; cin>>n;
    map<ll,int>mp;
    while(n--)
    {
        int l, r; cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    int sum = 0;
    for(auto [a, b]:mp)
    {
        sum += b;
        if(sum > 2) return false;
    }
    return true;
}

int main()
{
    code by shishirRsiam

    // int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe() ? pyn;

    return 0;
}