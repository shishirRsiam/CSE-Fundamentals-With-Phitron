#include<bits/stdc++.h>
#define str string 
#define ll long long 
#define vec vector<ll> 
#define PB(x) push_back(x)
#define loop(s,i,n) for(int i=s;i<n;i++)
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    str a, b; cin>>a>>b;
    int n = a.size(), ans = 0, i = 0;
    while(i<n)
    {
        if(a[i] != b[i]) ans++;
        i++;
    }
    cout<<ans<<"\n";
    return 0;
}