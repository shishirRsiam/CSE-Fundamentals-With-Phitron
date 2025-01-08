#include<bits/stdc++.h>
using namespace std;

class cmp
{
    public:
    bool operator()(pair<int,int>&a, pair<int,int>&b)
    {
        return a < b;
    }
};

int main()
{
    vector<pair<int,int>>v;

    int n,e; cin>>n>>e;
    while(e--)
    {
        int a,b; cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end(),cmp());
    for(auto x:v) cout<<x.first<<" "<<x.second<<endl;

    return 0;
}