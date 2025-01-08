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


/*Time   :   20:36:27
Date  	 :   10-06-2024
Author   :   shishirRsiam
File  	 :   A_Increasing_Sequence.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; cin>>n;
    vec a(n);
    loop(0,i,n) cin>>a[i];

    int x = 1;
    vec ans(n);
    loop(0,i,n)
    {
        if(a[i]==x) x++;
        ans[i] = x++;
    }

    // print(ans);
    cout<<ans.back()<<by  

    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}