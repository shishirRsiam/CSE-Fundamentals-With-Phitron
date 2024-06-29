#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "\n";
#define pi pair<ll,ll>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb push_back
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    
}

int main()
{
    code by shishirRsiam

    ll x, y;
    cin >> x >> y;

    if(x==y)
    {
        cout<<"=";
        return 0;
    }

    double a = y * log(x);
    double b = x * log(y);

    if (a < b)
        cout << "<" << endl;
    else if(a > b)
        cout << ">" << endl;
    else 
        cout << "=" << endl;

    return 0;
}