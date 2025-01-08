#include<bits/stdc++.h>
#define value first
#define idx second
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

class cmp
{
    public:
    bool operator()(pi a, pi b)
    {
        if(a.first == b.first) return a.second < b.second;
        return a.first > b.first;
    }
};

void fun()
{
    int n; cin>>n;
    vec a(n), b(n), c(n);
    vector<pi>aa,bb,cc;
    loop(0,i,n)
    {
        cin>>a[i];
        aa.push_back({a[i],i});
    }
    loop(0,i,n)
    {
        cin>>b[i];
        bb.push_back({b[i],i});
    }
    loop(0,i,n)
    {
        cin>>c[i];
        cc.push_back({c[i],i});
    }
    sort(bee(aa), cmp());
    sort(bee(bb), cmp());
    sort(bee(cc), cmp());
    
    ll ans = 0;
    loop(0,i,3)
    {
        loop(0,j,3)
        {
            loop(0,k,3)
            {
                if(aa[i].idx != bb[j].idx and aa[i].idx != cc[k].idx)
                {
                    if(bb[j].idx != cc[k].idx)
                    {
                        ll sum = aa[i].value + bb[j].value + cc[k].value;
                        ans = max(ans, sum);
                    }
                }
            }
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