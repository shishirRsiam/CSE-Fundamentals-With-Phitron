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
    vec a(n);
    set<int>st;
    int xxor = 0;
    loop(0,i,n) 
    {
        cin>>a[i];
        xxor ^= a[i];
        st.insert(a[i]);
    }

    // if(n != st.size()) 
    // {
    //     cout<<"-1\n";
    //     return;
    // }

    vec tmp;
    for(int v:a)
    {
        int num = xxor ^ v;
        tmp.pb(num);
    }
    int x = 0;
    for(int v:tmp) x ^= v;
    if(!x) cout<<xxor<<"\n";
    else cout<<"-1\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) testcase();

    return 0;
}