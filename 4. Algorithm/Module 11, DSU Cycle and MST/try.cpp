#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll n,t; cin>>n>>t;
    ll arr[n];

    map<ll,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mp[arr[i]] = i+1;
    }

    for(int i=0;i<n;i++)
    {
        int cur = t - arr[i];
        if(mp.find(cur) != mp.end() and mp[cur] != i+1)
        {
            cout<<i+1<<" "<<mp[cur]<<endl;
            return 0;
        }
    }

    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}