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

const int mxN = (1 << 15);
vector<ll>allpalindrome;

bool ispalindrome(str s)
{
    int i = 0, j = s.size()-1;
    while(i<j)
        if(s[i++] != s[j--]) return false;
    return true;
}

void testcase()
{
    int n; cin>>n;
    vec a(n), cnt(mxN);
    loop(0,i,n)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }

    ll ans =  n;
    loop(0,i,n)
    {
        for(int v:allpalindrome)
        {
            int cur = a[i] ^ v;
            ans += cnt[cur];
        }
    }
    cout<<(ans/2)<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    loop(0,i,mxN) 
    {
        if(ispalindrome(to_string(i)))
            allpalindrome.pb(i);
    }

    // cout<<allpalindrome.size();
    int t; cin>>t;
    while(t--) testcase();

    return 0;
}