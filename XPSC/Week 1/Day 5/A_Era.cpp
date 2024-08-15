#include<bits/stdc++.h>
#define ll long long 
#define vec vector<ll> 
#define str string 
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int ans = 0, n; cin>>n;
        for(int i=0;i<n;i++)
        {
            int a; cin>>a;
            ans = max(ans, a-(i+1));
        }
        cout<<ans<<"\n";
    }

    return 0;
}