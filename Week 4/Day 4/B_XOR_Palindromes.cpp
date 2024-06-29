#include<bits/stdc++.h>
#define str string
#define ll long long 
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

void testcase()
{
    int n; cin>>n;
    str s, ans; cin>>s;

    int i = 0, j = n-1, ok = 0, notok = 0;
    while(i<j)
    {
        if(s[i++] == s[j--]) ok += 2;
        else notok++;
    }

    loop(0,i,n)
    {
        int tmp = (i - notok);
        if(tmp < 0) 
        {
            ans += '0';
            continue;
        }

        tmp = max((tmp % 2), tmp - ok);
        tmp = max(0, tmp - (n % 2));

        ans += (tmp == 0 ? '1' : '0');
    }
    ans += ans[0];
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) testcase();

    return 0;
}