#include<bits/stdc++.h>
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

bool isodd(int n)
{
    return (n & 1) == 1;
}

bool getBit(int n)
{
    return (n & 1) == 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;
        vec a(n);
        loop(0,i,n) cin>>a[i];

        int cnt = 0, num = 0, i = 0, j = 0;
        int odd = 0;
        while(j<n)
        {
            if(a[j]%2) odd++;
            if(j-i+1 == k)
            {
                if(odd) cnt++;
                if(a[i++]%2) odd--;
            }
            j++;
        }
        cout<<cnt<<"\n";
    }

    return 0;
}