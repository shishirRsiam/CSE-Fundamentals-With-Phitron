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


/*Time   :   21:00:18
Date  	 :   24-06-2024
Author   :   shishirRsiam
File  	 :   B_Repainting_Street.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    set<int>st;
    int n, k; cin>>n>>k;
    vec a(n);
    loop(0,i,n) 
    {
        cin>>a[i];
        st.insert(a[i]);
    }

    int ans = INT_MAX;
    for(auto val:st)
    {
        int cnt = 0, i = 0;
        while(i<n)
        {
            while(a[i] == val and i < n) i++;
            if(i < n) cnt++, i += k;
        }
        ans = min(ans, cnt);
    }
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