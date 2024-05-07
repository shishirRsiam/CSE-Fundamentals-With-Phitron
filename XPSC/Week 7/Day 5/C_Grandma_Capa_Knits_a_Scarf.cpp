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


int huh(str &s, char ch)
{
    int cnt = 0, i = 0, j = s.size()-1;;
    while(i<=j)
    {
        if(s[i] != s[j])
        {
            cnt++;
            if(s[i]==ch) i++;
            else if(s[j]==ch) j--;
            else return INT_MAX;
        }
        else i++, j--;
    }
    return cnt;
}

void testcase()
{
    int n; cin>>n;
    str s; cin>>s;
    set<char>st(bee(s));

    int ans = INT_MAX;
    for(char ch:st)
        ans = min(ans, huh(s, ch));
    ans == INT_MAX ? cout<<"-1\n" : cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}