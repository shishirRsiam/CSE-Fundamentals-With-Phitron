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


/*Time   :   00:58:03
Date  	 :   23-06-2024
Author   :   shishirRsiam
File  	 :   A_Sushi_for_Two.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n, a, last = 1, cnt = 0; cin>>n;
    vec ok;
    ok.pb(0);
    loop(0,i,n)
    {
        cin>>a;
        if(a==last) cnt++;
        else
        {
            if(cnt) ok.pb(cnt);
            cnt = 1;
            last = a;
        }
    }
    ok.pb(cnt);
    
    n = ok.size();
    cnt = 0;
    for(int i=1;i<n;i++)
    {
        int two = min(ok[i], ok[i-1]);
        cnt = max(two*2, cnt);
    }
    cout<<cnt<< by 
    return true;
}

int main()
{
    code by shishirRsiam

    // int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}