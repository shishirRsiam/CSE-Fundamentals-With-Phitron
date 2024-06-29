#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vec a(n-1);
    loop(0,i,n-1) cin>>a[i];
    sort(a.begin(), a.end());
    loop(1,i,n+1)
    {
        if(i != a[i-1]) 
        {
            cout<<i;
            break;
        }
    }

    return 0;
}