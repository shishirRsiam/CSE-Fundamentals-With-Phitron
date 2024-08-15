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


/*Time   :   23:04:24
Date  	 :   24-06-2024
Author   :   shishirRsiam
File  	 :   C_Frog_Jumps.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    str s; cin>>s;
    int cnt = 1, ans = 0;
    for(auto ch:s)
    {
        if(ch == 'L') cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout<<ans<<endl;
    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}