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



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    str target = "meow";
    while(t--)
    {
        int n; cin>>n;
        str s; cin>>s;
        str hum;
        for(char &c:s) c = tolower(c);

        loop(0,i,n)
            if(s[i] != s[i+1]) hum += s[i];

        hum == target ? py:pn;
    }

    return 0;
}