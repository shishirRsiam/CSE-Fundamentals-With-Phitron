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


/*Time   :   10:21:23
Date  	 :   26-06-2024
Author   :   shishirRsiam
File  	 :   B_Deadly_Laser.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n,m,x,y,d; cin>>n>>m>>x>>y>>d;

    int x1 = x-d, x2 = x+d, y1 = y-d, y2 = y+d;

    if((x1 < 2 and x2 >= n) or (y1 < 2 and y2 >= m) or (x1 < 2 and y1 < 2) or (x2 >= n and y2 >= m))
    {
        cout<<"-1\n";
        return false;
    }

    cout<<n+m-2<<by

    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}