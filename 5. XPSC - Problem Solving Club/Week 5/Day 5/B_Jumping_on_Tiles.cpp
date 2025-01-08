#include<bits/stdc++.h>
#define str string
#define ll long long 
#define by "nothing";
#define pi pair<char,int>
#define vec vector<ll>
#define py cout<<"YES\n"
#define pn cout<<"NO\n"
#define pb(x) push_back(x)
#define bee(x) x.begin(), x.end()
#define pyn cout<<"YES\n":cout<<"NO\n"
#define shishirRsiam cin.tie(NULL);
#define code ios::sync_with_stdio(false);
#define loop(s,i,n) for(int i=s;i<n;i++)
#define print(x) for(auto v:x) cout<<v<<" ";
using namespace std;




void testcase()
{
    str s; cin>>s;
    int n = s.size();
    bool flag = true;
    if(s[0] > s.back()) flag = false;
    {
        priority_queue<pi>bigtosmalpq;
        priority_queue<pi, vector<pi>, greater<pi>>smalltobigpq;
        loop(1,i,n-1)
        {
            char c = s[i];
            if(flag and c>= s[0] and c <= s.back()) smalltobigpq.push({c, i});
            else if(!flag and c <= s[0] and c >= s.back()) bigtosmalpq.push({c, i});
            // i++;
        }
        if(flag) cout<<abs(s[0] - s.back())<<" "<<smalltobigpq.size()+2<<"\n";
        else cout<<abs(s[0] - s.back())<<" "<<bigtosmalpq.size()+2<<"\n";
        cout<<"1 ";
        if(flag)
        {
            while(!smalltobigpq.empty())
            {
                cout<<smalltobigpq.top().second+1<<" ";
                smalltobigpq.pop();
            }
        }
        else 
        {
            while(!bigtosmalpq.empty())
            {
                cout<<bigtosmalpq.top().second+1<<" ";
                bigtosmalpq.pop();
            }
        }
    } 
    cout<<n<<"\n";
}

int main()
{
    code by shishirRsiam

    int t; cin>>t;
    while(t--) 

        testcase();

    return 0;
}