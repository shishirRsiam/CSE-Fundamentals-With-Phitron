#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

void fun()
{
    int n; cin>>n;
    vec a(n);
    map<int,int>mp;
    loop(0,i,n)
    {
        cin>>a[i];
        mp[a[i]]++;
    }    
    sort(bee(a));

    int ans = 0;
    for(int v:a)
    {
        int cur = v;
        if(mp[cur])
        {
            ans++;
            while(mp[cur]) mp[cur++]--;
        }
    }
    cout<<ans<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) fun();

    return 0;
}