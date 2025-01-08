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

    int n, k; cin>>n>>k;
    vec a(n);
    loop(0,i,n)
    {
        cin>>a[i];
        if(a[i] != k) cout<<a[i]<<" ";
    }

    return 0;
}