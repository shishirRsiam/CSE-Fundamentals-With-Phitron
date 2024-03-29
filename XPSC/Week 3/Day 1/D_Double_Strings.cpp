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


void haha()
{
    int n; cin>>n;
    vector<str>ok;
    unordered_map<str,int>mp;
    loop(0,i,n)
    {
        str s; cin>>s;
        mp[s]++;
        ok.pb(s);
    }

    str ans;
    for(int i=0;i<n;i++)
    {
        str target = ok[i];
        bool flag = false;
        int huh = target.size();
        for(int x=0;x<huh;x++)
        {
            str a = target.substr(0,x);
            str b = target.substr(x, huh);
            if(mp[a]>0 and mp[b]>0)
            {
                flag = true;
                break;
            }
        }
        ans += (flag?"1":"0");
    }
    cout<<ans<<endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) haha();
    return 0;
}