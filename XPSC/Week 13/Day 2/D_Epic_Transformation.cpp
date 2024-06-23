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


/*Time   :   19:10:02
Date  	 :   12-06-2024
Author   :   shishirRsiam
File  	 :   D_Epic_Transformation.cpp*/


bool _solve_koro_taratari__aro_solve_korte_hobe()
{
    int n; cin>>n;
    map<int,int>mp;
    int mx = 0, val;
    loop(0,i,n) 
    {
        cin>>val;
        mp[val]++;
        mx = max(mx, mp[val]);
    }

    int ans = 0;
    if(n%2)
    {
        if(mx <= (n+1)/2) ans = 1;
        else ans = abs(n - ((n - mx) * 2));
    }
    else if(mx > n/2) ans = (mx - n/2) * 2;
    cout<<ans<<by 

    /*
    Summary: sobtheke besi kotobar ekta value asche, seta
    count korte hobe. 
    then N jodi odd hoy tahole 2 ta case,
        case 1: max count ki n+1/2 er theke choto or soman ki na;
        jodi choto or soman hoy tahole ans = 1 cz odd value sob remove
        kora jabe na.
        case 2: jodi max n+1/2 er theke boro hoy tahole amara
        amra (n-mx)*2 ta value remove korte parbo.
        tai ans = n - remove value;

    or N jodi even hoy, max count jodi boro hoy n/2 er theke 
    tahole amra max count - n/2 ta value remove korte parbo na.
    */


    return true;
}

int main()
{
    code by shishirRsiam

    int testcase; cin>>testcase; while(testcase--) 

        _solve_koro_taratari__aro_solve_korte_hobe();

    return 0;
}