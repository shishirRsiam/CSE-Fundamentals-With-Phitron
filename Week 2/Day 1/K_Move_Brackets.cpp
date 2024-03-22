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
        int n; cin>>n;
        int ans = 0;
        stack<char>st;
        loop(0,i,n) 
        {
            char c; cin>>c;
            if(c==')')
            {
                if(st.empty()) ans++;
                else st.pop();
            }
            else st.push(c);
        }
        cout<<ans<<endl;
    }

    return 0;
}