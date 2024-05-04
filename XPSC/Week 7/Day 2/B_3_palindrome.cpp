#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;



void testcase()
{
    int n; cin>>n;
    if(n==1)
    {
        cout<<"a\n";
        return;
    }
    str ans;
    bool flag = true;

    loop(0,i,n/2)
    {
        ans += (flag ? "aa" : "bb");
        flag = !flag;
    }
    if(n%2) ans += (ans.back() == 'a' ? 'b' : 'a');
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    // int t; cin>>t;
    // while(t--) 

        testcase();

    return 0;
}

/*
20
1 2 3 4 5 6 7 8 9 10 
11 12 13 14 15 16 17 18 19 20
*/