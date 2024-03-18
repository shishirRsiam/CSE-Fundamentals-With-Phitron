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

    int t; cin>>t;
    while(t--)
    {
        int n; char ch; cin>>n>>ch;
        str s; cin>>s; s += s;
        set<int>givenchar, needchar;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ch) givenchar.insert(i);
            if(s[i]=='g') needchar.insert(i);
        }

        int mx = -1;
        // cout<<s<<endl;
        for(int v:givenchar)
        {
            auto it = needchar.lower_bound(v);
            if(it != needchar.end())
            {
                // cout<<v<<" "<<*it<<" ";
                // cout<<s[*it]<<" ";
                mx = max(mx, *it-v);
            }
        }
        cout<<mx<<"\n";
    }

    return 0;
}
