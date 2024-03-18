#include<bits/stdc++.h>
#define str string 
#define vec vector<str> 
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<vector<str>>word;
        unordered_map<string, int>mp;
        for(int i=0;i<3;i++)
        {
            vec t;
            for(int j=0;j<n;j++)
            {
                str s; cin>>s;
                mp[s]++;
                t.push_back(s);
            }
            word.push_back(t);
        }
        for(int i=0;i<3;i++)
        {
            int ans = 0;
            for(str s:word[i])
            {
                if(mp[s]==1) ans += 3;
                else if(mp[s]==2) ans += 1;
            }
            cout<<ans<<" ";
        }
        cout<<'\n';
    }


    return 0;
}