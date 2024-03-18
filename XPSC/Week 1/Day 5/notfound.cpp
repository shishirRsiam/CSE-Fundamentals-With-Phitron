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

    str ch = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char, int>mp;

    str s; cin>>s;
    for(char c:s) mp[c]++;

    for(char c:ch)
    {
        if(mp[c]==0)
        {
            cout<<c<<'\n';
            return 0;
        }
    }
    cout<<"None\n";
    return 0;
}