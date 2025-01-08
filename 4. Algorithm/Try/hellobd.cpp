#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define pi pair<ll, ll> 
#define loop(s,i,n) for(ll i=s;i<n;i++)
using namespace std;

const int N = 1e6+5;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<pi>pq;  
    vec freq(N), ff(N); 
    int prev;
    ll n; cin>>n;
    loop(0,i,n)
    {
        ll x; cin>>x;
        if(x==1)
        {
            ll a; cin>>a;
            freq[a]++;

            if(ff[a]==0) pq.push({freq[a], a});
        }
        else if(x==2)
        {  
            if(pq.empty()) cout<<"empty\n";
            else 
            {
                prev = pq.top().second;
                while(!pq.empty())
                {
                    pq.pop();
                    if (pq.empty() || pq.top().second != prev)
                    {
                        cout<<prev<<"\n";
                        break;
                    }
                }  
            }
        }
    }

    return 0;
}