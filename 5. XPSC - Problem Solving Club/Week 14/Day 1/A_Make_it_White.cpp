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


/*Time   :   20:15:19
Date  	 :   10-06-2024
Author   :   shishirRsiam
File  	 :   A_Make_it_White.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; str s; cin>>n>>s;
    int a, b;
    for(int i=0;i<n;i++)
    {
        a = i;
        if(s[i]=='B') break;
    }
    for(int i=n-1;i>=0;i--)
    {
        b = i;
        if(s[i]=='B') break;
    }
    cout<<abs(a - b) + 1<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}