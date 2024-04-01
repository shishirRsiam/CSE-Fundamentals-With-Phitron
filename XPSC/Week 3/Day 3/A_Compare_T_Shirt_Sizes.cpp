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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        str a,b; cin>>a>>b;
        ll ansa = 0, ansb = 0;
        for(char c:a)
        {
            if(c=='X') ansa += 10;
            else if(c=='S') ansa *= -2;
            else if(c=='M') ansa += 5;
            else ansa += 8;
        }
        for(char c:b)
        {
            if(c=='X') ansb += 10;
            else if(c=='S') ansb *= -2;
            else if(c=='M') ansb += 5;
            else ansb += 8;
        }
        if(ansa == ansb) cout<<"=";
        else cout<<(ansa > ansb ? ">" : "<");
        cout<<"\n";
    }

    return 0;
}