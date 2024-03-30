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
    priority_queue<ll>pq;
    ll sum = 0;
    while(n--)
    {
        int a; cin>>a;
        if(a==0)
        {
            if(!pq.empty()) 
            {
                sum += pq.top();
                pq.pop();
            }
        }
        else pq.push(a);
    }
    cout<<sum<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) fun();

    return 0;
}