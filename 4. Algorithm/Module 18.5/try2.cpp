#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main()
{
    int N = 1000000000+5;
    vector<ll>ans(N);
    vector<bool>vst(N+1, false);

    ll t; cin>>t;
    while(t--)
    {
        ans.clear();
        ll n, k; cin>>n>>k;
        ll lo = (n/2)+1;

        for(ll i=1;i<=n;i+=2)
        {
            ans.push_back(i);
            vst[i]=true;
        }

        for(ll loo=2;loo<=lo;loo++)
        {
            for(ll i=loo;i<=n;i+=loo)
            {
                if(!vst[i] and (i/loo)%2==1)
                {
                    ans.push_back(i);
                    vst[i]=true;
                }
            }
        }


        cout<<ans[k-1]<<endl;
    }

    return 0;
}


/*
1
3
5
7
2
6
4
1
27
37
536870912
*/