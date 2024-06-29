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

    int s, t; cin>>s>>t;
    ll cnt = 0;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                int plus = i+j+k, mul = i*j*k;
                if(plus<=s and mul<=t) cnt++;
            }
        }
    }
    cout<<cnt<<'\n';

    return 0;
}