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

    int t; cin>>t;
    while(t--)
    {
        int n, b; cin>>n>>b;
        unordered_map<char, int>mp;
        loop(0,i,n)
        {
            char ch; cin>>ch;
            mp[ch]++;
        }
        int one = -1;
        for(auto &x:mp)
            if(x.second%2==1) one++;
        cout<<(one<=b?"YES\n":"NO\n");
    }

    return 0;
}