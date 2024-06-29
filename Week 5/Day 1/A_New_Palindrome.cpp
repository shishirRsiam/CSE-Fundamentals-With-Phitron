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
    str s; cin>>s;
    int i = 0, j = s.size()-1, cnt = 0;
    char prev;
    while(i<j)
    {
        if(i==0) prev = s[i];
        else if(prev != s[i]) cnt++;
        prev = s[i];
        i++, j--;
    }
    cnt ? py:pn;
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 
        testcase();

    return 0;
}