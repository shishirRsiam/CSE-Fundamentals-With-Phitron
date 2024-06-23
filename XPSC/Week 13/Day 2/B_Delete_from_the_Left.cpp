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


/*Time   :   00:27:51
Date  	 :   23-06-2024
Author   :   shishirRsiam
File  	 :   B_Delete_from_the_Left.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    str s1, s2; cin>>s1>>s2;
    int n = s1.size(), m = s2.size();
    int i = n-1, j = m-1, ok = 0;
    while(i >= 0 and j >= 0)
    {
        if(s1[i--] != s2[j--]) break;
        ok += 2;
    }
    cout<<(n+m)-ok<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    // int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}