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


/*Time   :   16:50:13
Date  	 :   26-06-2024
Author   :   shishirRsiam
File  	 :   C_Increase_and_Copy.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; cin>>n;
    int x = (sqrt(n)), ans = x+x;
    // cout<<int(sqrt(n))<<" "<<ceil(sqrt(n))<<" "<<floor(sqrt(n))<<by 
    if(x*x >= n) ans -= 2;
    else if((x+1)*x >= n) ans--;
    cout<<ans<<by 
    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}