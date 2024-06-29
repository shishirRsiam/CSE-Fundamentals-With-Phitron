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


int main()
{
    int n, x = 1; cin>>n;

    if(n==1)
    {
        cout<<1<<by;
        return 0;
    }

    if(n==2 or n==3)
    {
        cout<<"NO SOLUTION";
        return 0;
    }

    deque<int>ans;
    bool flag = true;
    loop(1,i,n)
    {
        flag ? ans.push_back(x) : ans.push_front(x);
        x++;
        if(x==2) x++;
        flag = !flag;
    }
    ans.push_back(2);
    print(ans);

    return 0;
}