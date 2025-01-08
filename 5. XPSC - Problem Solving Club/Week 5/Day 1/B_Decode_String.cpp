#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
#define code ios::sync_with_stdio(false);
#define shishirRsiam cin.tie(NULL);
using namespace std;



void testcase()
{
    int n, i = 0; cin>>n;
    str s, ans; cin>>s;
    while(i<n)
    {
        if(i+3 < n and s[i+3]=='0')
        {
            ans += (s[i]-'0'+'a'-1);
            i++;
        }
        else if(i+2<n)
        {
            int num;
            if(s[i+2]=='0')
            {
                num = stoi(s.substr(i,2)); 
                i+=2;
            }
            else num = s[i++]-'0';
            ans += num +'a'-1;
        }
        else 
        {
            int num = s[i]-'0';
            ans += num +'a'-1;
            i++;
        }
        if(ans.back()=='`') ans.pop_back();
    }
    cout<<ans<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}