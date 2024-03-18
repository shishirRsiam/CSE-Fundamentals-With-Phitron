#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    ll sum = 0;
    priority_queue<ll, vector<ll>,greater<ll>>pq;
    while(n--)
    {
        ll s; cin>>s;
        sum += s;
        pq.push(s);
    }
    if(sum%2==0) cout<<sum<<"\n";
    else
    {
        while(pq.top()%2 != 1) pq.pop();
        cout<<sum-pq.top()<<"\n";
    }
    return 0;
}